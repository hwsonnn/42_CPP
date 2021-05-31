#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, "unknown")
{
	std::cout << "<"<<name<<"> comes to Ninjatraps" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
	std::cout << "<"<<name<<"> comes to Ninjatraps" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& src)
{
	*this = src;
	std::cout << "Copy <"<<name<<"> comes to Ninjatraps" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "<"<<name<<"> NINJATRAPS IS OVER" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& ninjaTrap)
{
	ClapTrap::operator=(ninjaTrap);
	return (*this);
}

void NinjaTrap::ninjaShoebox(NinjaTrap& ref)
{
	std::cout << "[Ninja->Ninja] " << name << " attacks " << ref.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap& ref)
{
	std::cout << "[Ninja->Clap] " << name << " attacks " << ref.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& ref)
{
	std::cout << "[Ninja->Frag] " << name << " attacks " << ref.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& ref)
{
	std::cout << "[Ninja->Scav] " << name << " attacks " << ref.getName() << std::endl;
}
