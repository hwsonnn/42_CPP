#include "FragTrap.hpp"

FragTrap::FragTrap(void) : 
			hp(100), maxHp(100),
			energy(100), maxEnergy(100), level(1),
			meleeDam(30), rangedDam(20), armor(5),
			name("unknown")
{
	std::cout << "Create Player : <"<<name<<">" << std::endl;
}

FragTrap::FragTrap(std::string name) :
			hp(100), maxHp(100),
			energy(100), maxEnergy(100), level(1),
			meleeDam(30), rangedDam(20), armor(5),
			name(name)
{
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

unsigned int FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << name << "> attacks <" \
			<< target << "> at range, causing " << rangedDam \
			<< " points of damage!" << std::endl;
	return (rangedDam);
}

unsigned int FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << name << "> attacks <" \
			<< target << "> at melee, causing " << meleeDam \
			<< " points of damage!" << std::endl;
	return (meleeDam);
}

void FragTrap::takeDamage(unsigned int amount)
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
	std::cout << name << " takes " \
			<< damage << " points of damage!" << std::endl;
	hp -= damage;	
	if (hpp <= 0)
	{
		hp = 0;
		std::cout << name << " is dead!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (hp == 0)
	{
		std::cout << name << " can't repaired. Already dead!" << std::endl;
		return ;
	}
	std::cout << name << " has repaired " \
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

void FragTrap::show_status(void)
{
	std::cout << "FragTrap :: " << name << std::endl;
	std::cout << " HP : " << hp << std::endl;
	std::cout << " EP : " << energy << std::endl;
	std::cout << " DEF(armor)  : " << armor << std::endl;
}