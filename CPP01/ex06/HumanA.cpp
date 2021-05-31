#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &wp) : name(name), wp(wp) {}


void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << wp.getType() << std::endl;
}