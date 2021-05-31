#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout<<"Gaaah. Me want smash heads!"<<std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout<<"Aaaargh"<<std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& src) : Enemy(src)
{
	std::cout<<"Gaaah. Me want smash heads!"<<std::endl;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& src)
{
	Enemy::operator=(src);
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	int dam = damage - 3;

	if (dam < 0)
		return ;
	hp -= dam;
}