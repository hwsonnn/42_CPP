#include "AWeapon.hpp"

AWeapon::AWeapon(void) : name("default"), APcost(0), damage(0)
{
	// std::cout<<"[Base] AWeapon"<<std::endl;	
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) 
		: name(name), APcost(apcost), damage(damage)
{
	// std::cout<<"[Base] AWeapon"<<std::endl;	
}

AWeapon::~AWeapon()
{
	// std::cout<<"[Base] AWeapon"<<std::endl;	
}

AWeapon::AWeapon(const AWeapon& src)
{
	*this = src;
	// std::cout<<"[Base] AWeapon"<<std::endl;	
}

AWeapon& AWeapon::operator=(const AWeapon& src)
{
	name = src.name;
	APcost = src.APcost;
	damage = src.damage;
	return (*this);
}

std::string AWeapon::getName() const
{
	return (name);
}

int AWeapon::getAPCost() const
{
	return (APcost);
}
int AWeapon::getDamage() const
{
	return (damage);
}