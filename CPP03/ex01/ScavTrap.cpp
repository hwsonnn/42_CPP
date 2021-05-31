#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : 
			hp(100), maxHp(100),
			energy(50), maxEnergy(50), level(1),
			meleeDam(20), rangedDam(15), armor(3),
			name("unknown")
{
	std::cout << "<"<<name<<"> comes to Claptraps" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
			hp(100), maxHp(100),
			energy(50), maxEnergy(50), level(1),
			meleeDam(20), rangedDam(15), armor(3),
			name(name)
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

unsigned int ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << name << "> attacks <"
			<< target << "> at range, causing " << rangedDam
			<< " points of damage!" << std::endl;
	return (rangedDam);
}

unsigned int ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << name << "> attacks <"
			<< target << "> at melee, causing " << meleeDam
			<< " points of damage!" << std::endl;
	return (meleeDam);
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armor;

	if (amount == 0)
		damage = 0;
	if (hp == 0)
	{
		std::cout << name << " already dead" << std::endl;
		return ;
	}
	if (damage < 0)
	{
		std::cout << name << " is too strong! not damaged!" << std::endl;
		return ;
	}
	std::cout << name << " takes "
			<< damage << " points of damage!" << std::endl;
	hp -= damage;	
	if (hp <= 0)
	{
		hp = 0;
		std::cout << name << " is dead!" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hp == 0)
	{
		std::cout << name << " can't repaired. Already dead!" << std::endl;
		return ;
	}
	std::cout << name << " has repaired "
			<< amount << " points of hp!" << std::endl;
	hp += amount;	
	if (hp > maxHp)
	{
		hp = maxHp;
		std::cout << name << "has full hp!" << std::endl;
	}
	energy += amount;
	if (energy > maxEnergy)
	{
		energy = maxEnergy;
		std::cout << name << "has full energy!" << std::endl;
	}
}

void ScavTrap::challengeNewcomer(void)
{
	// srand(time(NULL));

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

void ScavTrap::show_status(void)
{
	std::cout << "ScavTrap :: " << name << std::endl;
	std::cout << " HP : " << hp << std::endl;
	std::cout << " EP : " << energy << std::endl;
	std::cout << " DEF(armor)  : " << armor << std::endl;
}