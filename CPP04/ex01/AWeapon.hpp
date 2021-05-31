#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	protected:
		std::string name;
		int			APcost;
		int			damage;

	public:
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();				//virtual소멸자!
		AWeapon(const AWeapon& src);
		AWeapon& operator=(const AWeapon& src);

		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
	
		virtual void attack() const = 0; //순수가상함수!
};

#endif