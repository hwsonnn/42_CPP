#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &ref) : AMateria(ref)
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice &ref)
{
	AMateria::operator=(ref);
	return(*this);
}

AMateria* Ice::clone() const
{
	AMateria *copy = new Ice(*this);
	return (copy);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}