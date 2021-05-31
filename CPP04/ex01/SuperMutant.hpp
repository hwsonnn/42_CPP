#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		// SuperMutant(int hp, std::string const& type);
		virtual ~SuperMutant();
		SuperMutant(const SuperMutant& src);
		SuperMutant& operator=(const SuperMutant& src);

		virtual void takeDamage(int damage);
};

#endif