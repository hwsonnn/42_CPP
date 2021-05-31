#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& src);
		~NinjaTrap();
		NinjaTrap& operator=(const NinjaTrap& src);

		void ninjaShoebox(NinjaTrap& ref);
		void ninjaShoebox(ClapTrap& ref);
		void ninjaShoebox(FragTrap& ref);
		void ninjaShoebox(ScavTrap& ref);
};

#endif