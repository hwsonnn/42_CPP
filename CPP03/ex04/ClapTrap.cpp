#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : 
			hp(100), maxHp(100),
			energy(100), maxEnergy(100), level(1),
			meleeDam(30), rangedDam(20), armor(5),
			name("unknown")
{
	std::cout << "[Base Class] Create Player : <"<<name<<">" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : 
			hp(100), maxHp(100),
			energy(100), maxEnergy(100), level(1),
			meleeDam(30), rangedDam(20), armor(5),
			name(name)
{
	std::cout << "[Base Class] Create Player : <"<<name<<">" << std::endl;
}

ClapTrap::ClapTrap(int hp, int maxHp, int energy,
				int maxEnergy, int level, int meleeDam,
				int rangedDam, int armor, std::string name)
{
	this->hp = hp;
	this->maxHp = maxHp;
	this->energy = energy;
	this->maxEnergy = maxEnergy;
	this->level = level;
	this->meleeDam = meleeDam;
	this->rangedDam = rangedDam;
	this->armor = armor;
	this->name = name;

	std::cout << "[Base Class] Create Player : <"<<name<<">" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "[Base Class] Create copy Player : <"<<name<<">" << std::endl;
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "[Base Class] <"<<name<<"> GAME OVER" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
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

unsigned int ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << name << "> attacks <"
			<< target << "> at range, causing " << rangedDam
			<< " points of damage!" << std::endl;
	return (rangedDam);
}

unsigned int ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << name << "> attacks <"
			<< target << "> at melee, causing " << meleeDam
			<< " points of damage!" << std::endl;
	return (meleeDam);
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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

void ClapTrap::show_status(void)
{
	std::cout << "ClapTrap :: " << name << std::endl;
	std::cout << " HP : " << hp << std::endl;
	std::cout << " EP : " << energy << std::endl;
	std::cout << " DEF(armor)  : " << armor << std::endl;
}

std::string &ClapTrap::getName(void)
{
	return (name);
}