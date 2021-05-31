#include "Character.hpp"

Character::Character()
{
	name = "default";
	for (int i = 0; i < 4; i++)
		inven[i] = 0;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inven[i] = 0;
}

Character::Character(const Character &ref)
{
	for (int i = 0; i < 4; i++)
		inven[i] = 0;
	*this = ref;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inven[i])
			delete inven[i];
		inven[i] = 0;
	}
}

Character		&Character::operator=(const Character &ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (inven[i])
			delete inven[i];
		inven[i] = 0;
	}
	name = ref.getName();
	for (int i = 0; i < 4; i++)
		inven[i] = ref.inven[i] ? ref.inven[i]->clone() : 0;
	return (*this);
}

std::string const& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inven[i])
		{
			inven[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (inven[idx])
		inven[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (inven[idx])
		inven[idx]->use(target);
}
