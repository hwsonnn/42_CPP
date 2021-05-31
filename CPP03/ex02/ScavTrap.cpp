#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	hp = 100;
	maxHp = 100;
	energy = 50;
	maxEnergy = 50;
	level = 1;
	meleeDam = 20;
	rangedDam = 15;
	armor = 3;
	std::cout << "<"<<name<<"> comes to Claptraps" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hp = 100;
	maxHp = 100;
	energy = 50;
	maxEnergy = 50;
	level = 1;
	meleeDam = 20;
	rangedDam = 15;
	armor = 3;
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

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	this->hp = src.hp;
	this->maxHp = src.maxHp;
	this->energy = src.energy;
	this->maxEnergy = src.maxEnergy;
	this->level = src.level;
	this->meleeDam = src.meleeDam;
	this->rangedDam = src.rangedDam;
	this->armor = src.armor;
	this->name = src.name;
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
