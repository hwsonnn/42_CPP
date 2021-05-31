#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, "unknown"),
		FragTrap(), NinjaTrap()
{
	std::cout << "<"<<name<<"> comes to SuperTraps" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name),
		FragTrap(), NinjaTrap()
{
	std::cout << "<"<<name<<"> comes to SuperTraps" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& src)
{
	*this = src;
	std::cout << "Copy <"<<name<<"> comes to SuperTraps" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "<"<<name<<"> SUPERTRAP IS OVER" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& superTrap)
{
	ClapTrap::operator=(superTrap);
	return (*this);
}