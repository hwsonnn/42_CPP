#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{

}

Sorcerer::Sorcerer(std::string name, std::string title) : 
	name(name), title(title)
{
	std::cout<<name<<", "<<title<<", is born!"<<std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout<<name<<", "<<title<<", is dead. "
		<<"Consequences will never be the same!"<<std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& src)
{
	*this = src;
	std::cout<<name<<", "<<title<<", is born!"<<std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& src)
{
	name = src.name;
	title = src.title;
	return (*this);
}

std::string Sorcerer::getName(void) const
{
	return (name);
}

std::string Sorcerer::getTitle(void) const
{
	return (title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& out, const Sorcerer& sorcerer)
{
	out<<"I am "<<sorcerer.getName()<<", "<<sorcerer.getTitle()
			<<", and I like ponies!"<<std::endl;
	return (out);
}