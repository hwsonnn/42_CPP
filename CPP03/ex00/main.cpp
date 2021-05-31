#include "FragTrap.hpp"

int main(void)
{
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
	hyo.takeDamage(hson.vaulthunter_dot_exe("hyo"));
	hyo.show_status();
	std::cout << std::endl;

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
	//hp-bar, ep-bar, 크리티컬확률 공격
}