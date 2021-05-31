#include "Peon.hpp"

Peon::Peon(void) : Victim()
{
	
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout<<"Zog zog."<<std::endl;
}

Peon::~Peon()
{
	std::cout<<"Bleuark..."<<std::endl;
}

Peon::Peon(const Peon& src) : Victim(src)
{
	std::cout<<"Zog zog."<<std::endl;
}

Peon& Peon::operator=(const Peon& src)
{
	name = src.name;
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout<<getName()<<" has been turned into a pink pony!"<<std::endl;
}

