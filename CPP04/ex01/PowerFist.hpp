#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		~PowerFist();
		PowerFist(const PowerFist& src);
		PowerFist& operator=(const PowerFist& src);

		virtual void attack() const; 
};

#endif