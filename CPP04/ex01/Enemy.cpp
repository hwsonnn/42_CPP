#include "Enemy.hpp"

Enemy::Enemy(void) : hp(0), type(0)
{
}

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
}

Enemy::~Enemy(void)
{
}

Enemy::Enemy(const Enemy& src)
{
	*this = src;
}

Enemy& Enemy::operator=(const Enemy& src)
{
	hp = src.hp;
	type = src.type;
	return (*this);
}

std::string Enemy::getType() const
{
	return (type);
}

int Enemy::getHP() const
{
	return (hp);
}