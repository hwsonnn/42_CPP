#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &wp)
{
	this->wp = &wp;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with his " << wp->getType() << std::endl;
}