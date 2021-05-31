#include "Victim.hpp"

Victim::Victim(void)
{
	
}

Victim::Victim(std::string name) : 
	name(name)
{
	std::cout<<"Some random victim called "<<name<<" just appeard!"<<std::endl;
}

Victim::~Victim()
{
	std::cout<<"Victim "<<name<<" just died for no apparent reason!"<<std::endl;
}

Victim::Victim(const Victim& src)
{
	*this = src;
	std::cout<<"Some random victim called "<<name<<" just appeard!"<<std::endl;
}

Victim& Victim::operator=(const Victim& src)
{
	name = src.name;
	return (*this);
}

std::string Victim::getName(void) const
{
	return (name);
}

void Victim::getPolymorphed(void) const
{
	std::cout<<name<<" has been turned into a cute little sheep!"<<std::endl;
}

std::ostream& operator<<(std::ostream& out, const Victim& victim)
{
	out<<"I am "<<victim.getName()<<", and I like otters!"<<std::endl;
	return (out);
}
