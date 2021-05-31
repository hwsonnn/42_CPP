#ifndef Ice_HPP
# define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& ref);
		Ice& operator=(const Ice& ref);
	
		virtual AMateria	*clone() const;
		virtual void 		use(ICharacter &target);
};

#endif