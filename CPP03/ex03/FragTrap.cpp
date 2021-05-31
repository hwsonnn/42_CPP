#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	hp = 100;
	maxHp = 100;
	energy = 100;
	maxEnergy = 100;
	level = 1;
	meleeDam = 30;
	rangedDam = 20;
	armor = 5;
	std::cout << "Create Player : <"<<name<<">" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hp = 100;
	maxHp = 100;
	energy = 100;
	maxEnergy = 100;
	level = 1;
	meleeDam = 30;
	rangedDam = 20;
	armor = 5;
	std::cout << "Create Player : <"<<name<<">" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
	std::cout << "Create copy Player : <"<<name<<">" << std::endl;
}


FragTrap::~FragTrap(void)
{
	std::cout << "<"<<name<<"> GAME OVER" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
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
