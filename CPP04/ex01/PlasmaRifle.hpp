#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		~PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& src);
		PlasmaRifle& operator=(const PlasmaRifle& src);

		virtual void attack() const; 
};

#endif