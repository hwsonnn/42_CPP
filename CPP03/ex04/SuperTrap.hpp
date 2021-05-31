#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& src);
		~SuperTrap();
		SuperTrap& operator=(const SuperTrap& superTrap);
};

#endif