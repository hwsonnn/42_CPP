#include "Enemy.hpp"

Enemy::Enemy(void) : hp(0), type(0)
{
	// std::cout<<"[Base] Enemy"<<std::endl;

}

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
	// std::cout<<"[Base] Enemy"<<std::endl;
}

Enemy::~Enemy(void)
{
	// std::cout<<"[Base] Enemy Bye"<<std::endl;
}

Enemy::Enemy(const Enemy& src)
{
	*this = src;
	// std::cout<<"[Base] Enemy"<<std::endl;
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