#ifndef HUMAMB_HPP
# define HUMAMB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *wp;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &wp);
		void attack();
	
};

#endif