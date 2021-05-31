#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		// PlasmaRifle(std::string const &name, int apcost, int damage);
		~PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& src);
		PlasmaRifle& operator=(const PlasmaRifle& src);

		virtual void attack() const; 
};

#endif