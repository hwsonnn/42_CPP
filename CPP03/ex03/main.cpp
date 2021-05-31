#include "NinjaTrap.hpp"
// #include <unistd.h>

int main(void)
{
	// srand(time(NULL));

	NinjaTrap hson("hson");
	NinjaTrap hyo("hyo");
	std::cout << std::endl;

	// hyo.takeDamage(hson.rangedAttack("hyo"));
	// hyo.show_status();
	// std::cout << std::endl;
	// hson.takeDamage(hyo.meleeAttack("hson"));
	// hson.show_status();
	// std::cout << std::endl;

	// std::cout << "----------REPAIR----------" << std::endl;
	// hyo.beRepaired(50);
	// hyo.show_status();
	// std::cout << std::endl;
	// hson.beRepaired(10);
	// hson.show_status();
	// std::cout << std::endl;

	std::cout << "----------NINJASHOEBOX ATTACK----------" << std::endl;
	ClapTrap    mijeong("mijeong");
	FragTrap    kilee("kilee");
    ScavTrap    hyeonkim("hyeonkim");

	hson.ninjaShoebox(hyo);
	hson.ninjaShoebox(mijeong);
	hson.ninjaShoebox(kilee);
	hson.ninjaShoebox(hyeonkim);
	
}