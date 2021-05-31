#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	hp = 60;
	maxHp = 60;
	energy = 120;
	maxEnergy = 120;
	level = 1;
	meleeDam = 60;
	rangedDam = 5;
	armor = 0;
	std::cout << "<"<<name<<"> comes to Ninjatraps" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	hp = 60;
	maxHp = 60;
	energy = 120;
	maxEnergy = 120;
	level = 1;
	meleeDam = 60;
	rangedDam = 5;
	armor = 0;
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

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& src)
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
