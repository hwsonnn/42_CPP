#include "AMateria.hpp"

AMateria::AMateria(void) : _type("defalt"), _xp(0)
{
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &ref)
{
	*this = ref;
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria &ref)
{
	_type = ref._type;
	_xp = ref._xp;
	return(*this);
}

std::string const& AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}