#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& src) : AWeapon(src)
{
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& src)
{
	AWeapon::operator=(src);
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}