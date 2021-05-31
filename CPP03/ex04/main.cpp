#include "SuperTrap.hpp"
#include <unistd.h>

int main(void)
{
	// srand(time(NULL));

	SuperTrap hson("hson");
	hson.show_status();
	std::cout << std::endl;
	
	SuperTrap hyo("hyo");
	hyo.show_status();
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

	std::cout << "----------NINJASHOEBOX ATTACK----------" << std::endl;
	ClapTrap    mijeong("mijeong");
	FragTrap    kilee("kilee");
    ScavTrap    hyeonkim("hyeonkim");

	hson.ninjaShoebox(mijeong);
	hson.ninjaShoebox(kilee);
	hson.ninjaShoebox(hyeonkim);
}