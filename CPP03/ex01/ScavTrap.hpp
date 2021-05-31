#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class ScavTrap
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
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& src);

		unsigned int rangedAttack(std::string const &target);
		unsigned int meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(void);
		void show_status();	
};

#endif