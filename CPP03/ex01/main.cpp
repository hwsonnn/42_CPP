#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main(void)
{
	srand(time(NULL));

	FragTrap hson("hson");
	FragTrap hyo("hyo");
	FragTrap hson1(hson);
	FragTrap hson2;
	hson2 = hson;
	std::cout << std::endl;

	hyo.takeDamage(hson.rangedAttack("hyo"));
	hyo.show_status();
	std::cout << std::endl;
	hson.takeDamage(hyo.meleeAttack("hson"));
	hson.show_status();
	std::cout << std::endl;

	std::cout << "----------REPAIR----------" << std::endl;
	hyo.beRepaired(50);
	hyo.show_status();
	std::cout << std::endl;
	hson.beRepaired(10);
	hson.show_status();
	std::cout << std::endl;

	std::cout << "----------VAULTHUNTER ATTACK----------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << "th ----------" << std::endl;
		// usleep(10);	//unistd.h
		hyo.takeDamage(hson.vaulthunter_dot_exe("hyo"));
		hyo.show_status();
		std::cout << std::endl;
	}

	std::cout << "----------hsoh will die----------" << std::endl;
	hson.takeDamage(hyo.meleeAttack("hson"));
	hson.show_status();
	hson.takeDamage(hyo.meleeAttack("hson"));
	hson.show_status();
	hson.takeDamage(hyo.meleeAttack("hson"));
	hson.show_status();
	hson2.takeDamage(hyo.meleeAttack("hson2"));
	hson2.show_status();
	std::cout << std::endl;

	std::cout << "----------REPAIR----------" << std::endl;
	hyo.beRepaired(20);
	hyo.show_status();
	std::cout << std::endl;
	hson.beRepaired(20);
	hson.show_status();
	std::cout << std::endl;


	std::cout << "\n\n--------------------ScavTrap--------------------\n\n\n\n";


	ScavTrap mijeong("mijeong");
	ScavTrap park("park");
	ScavTrap mijeong1(mijeong);
	ScavTrap mijeong2;
	mijeong2 = mijeong;
	std::cout << std::endl;

	park.takeDamage(mijeong.rangedAttack("park"));
	park.show_status();
	std::cout << std::endl;
	mijeong.takeDamage(park.meleeAttack("mijeong"));
	mijeong.show_status();
	std::cout << std::endl;

	std::cout << "----------REPAIR----------" << std::endl;
	park.beRepaired(50);
	park.show_status();
	std::cout << std::endl;
	mijeong.beRepaired(10);
	mijeong.show_status();
	std::cout << std::endl;

	std::cout << "----------CHALLENGE NEW----------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << "th ----------" << std::endl;
		// usleep(10);	//unistd.h
		park.challengeNewcomer();
		std::cout << std::endl;
	}

	std::cout << "----------REPAIR----------" << std::endl;
	park.beRepaired(20);
	park.show_status();
	std::cout << std::endl;
	mijeong.beRepaired(20);
	mijeong.show_status();
	std::cout << std::endl;


}