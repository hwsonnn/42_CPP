#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist& src) : AWeapon(src)
{
}

PowerFist& PowerFist::operator=(const PowerFist& src)
{
	AWeapon::operator=(src);
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout<<"* pschhh... SBAM! *"<<std::endl;
}