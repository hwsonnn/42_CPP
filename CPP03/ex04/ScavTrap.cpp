#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, "unknown")
{
	std::cout << "<"<<name<<"> comes to Claptraps" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, name)
{
	std::cout << "<"<<name<<"> comes to Claptraps" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	*this = src;
	std::cout << "Copy <"<<name<<"> comes to Claptraps" << std::endl;
}


ScavTrap::~ScavTrap(void)
{
	std::cout << "<"<<name<<"> CLAPTRAPS IS OVER" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	ClapTrap::operator=(scavTrap);
	return (*this);
}

void ScavTrap::challengeNewcomer(void)
{
	std::string challenge[] = {
		"Deliver this letter.",
		"Watch this movie without subtitles!",
		"Go through this dark tunnel.",
		"Catch 100 green slimes.",
		"Do push-ups 100 times."
	};
	int random = rand() % 5;
	std::cout << "<" << name << "> 's misson : "
			<< challenge[random] << std::endl;
}
