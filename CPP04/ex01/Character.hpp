#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"

class Character
{
	private:
		std::string name;
		int			AP;
		AWeapon		*wp;

	public:
		Character();
		Character(std::string const &name);
		~Character();
		Character(const Character& src);
		Character& operator=(const Character& src);

		void recoverAP();
		void equip(AWeapon* wp);
		void attack(Enemy* enemy);

		std::string getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;
};

std::ostream& operator<<(std::ostream& out, const Character& character);

#endif