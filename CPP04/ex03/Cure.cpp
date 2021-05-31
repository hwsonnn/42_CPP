#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &ref) : AMateria(ref)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure &ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *copy = new Cure(*this);
	return (copy);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}