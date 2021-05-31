#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, "unknown")
{
	std::cout << "<"<<name<<"> comes to FragTraps" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
	std::cout << "<"<<name<<"> comes to FragTraps" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
	std::cout << "Create copy Player : <"<<name<<">" << std::endl;
}


FragTrap::~FragTrap(void)
{
	std::cout << "<"<<name<<"> FRAGTRAP IS OVER" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	ClapTrap::operator=(fragTrap);
	return (*this);
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (energy < 25)
	{
		std::cout << "<" << name << "> doesn't have enough evergy to use aulthunter_dot_exe!" << std::endl;
		return (0);
	}
	energy -= 25;

	int random = rand() % 5;
	std::string attack[] = {"RollingThunder", "Soulflare",\
			 "Lath Rian Oune Vi", "Gaen Naia Kyri Vi", "Sae Eleisa Tera Vi"};
	int dam[] = {5, 15, 10, 7, 20};
	std::cout << "<" << name << "> attacks <" << target \
			<< "> with " << attack[random] << ", causing " << dam[random] \
			<< " points of damage!" << std::endl;
	return (dam[random]);
}
