#include "Character.hpp"

Character::Character(void) : name("unknown"), AP(40), wp(0)
{
	// std::cout<<"Character"<<std::endl;	
}

Character::Character(std::string const &name) : name(name), AP(40), wp(0)
{
	// std::cout<<"Character"<<std::endl;
}

Character::~Character()
{
	// if (wp)
	// 	delete wp;
	// std::cout<<"Character Bye"<<std::endl;
}

Character::Character(const Character& src)
{
	*this = src;
	// std::cout<<"Character"<<std::endl;
}

Character& Character::operator=(const Character& src)
{
	name = src.name;
	AP = src.AP;
	wp = src.wp;
	return (*this);
}

void Character::recoverAP()
{
	AP += 10;
	AP = (AP > 40) ? 40 : AP;
}

void Character::equip(AWeapon* wp)
{
	this->wp = wp;
}

void Character::attack(Enemy* enemy)
{
	if (!wp)
		return ;
	if (AP < wp->getAPCost())
		return ;
	AP -= wp->getAPCost();
	std::cout<<name<<" attack "<<enemy->getType()<<" with a "<<wp->getName()<<std::endl;
	wp->attack();
	enemy->takeDamage(wp->getDamage());
	// if (enemy.getHP() <= 0)
	// 	delete enemy;
}

std::string Character::getName() const
{
	return (name);
}

int Character::getAP() const
{
	return (AP);
}

AWeapon *Character::getWeapon() const
{
	return (wp);
}

std::ostream& operator<<(std::ostream& out, const Character& character)
{
	if (character.getWeapon())
		out<<character.getName()<<" has "<<character.getAP()<<" AP and wields a "
			<<character.getWeapon()->getName()<<std::endl;
	else
		out<<character.getName()<<" has "<<character.getAP()<<" AP and is unarmed"
			<<std::endl;
	return (out);
}
