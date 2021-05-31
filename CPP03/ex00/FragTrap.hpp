#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class FragTrap
{
	private:
		int hp;
		int maxHp;
		int energy;
		int maxEnergy;
		int level;
		int meleeDam;
		int rangedDam;
		int armor;
		std::string name;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		~FragTrap();
		FragTrap& operator=(const FragTrap& src);

		unsigned int rangedAttack(std::string const &target);
		unsigned int meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int vaulthunter_dot_exe(std::string const &target);
		void show_status();
};

#endif