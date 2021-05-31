#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout<<"* click click click *"<<std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout<<"* SPROTCH *"<<std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& src) : Enemy(src)
{
	std::cout<<"* click click click *"<<std::endl;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& src)
{
	Enemy::operator=(src);
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	hp -= damage;
}