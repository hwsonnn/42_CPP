#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
		
		Sorcerer(); //private에 있으면 인스턴스화를 할 수 없음(접근X)
	
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(const Sorcerer& src);
		Sorcerer& operator=(const Sorcerer& src);

		std::string getName() const;
		std::string getTitle() const;

		void polymorph(Victim const &victim) const;
};

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

std::ostream& operator<<(std::ostream& out, const Victim& victim)
{
	out<<"I am "<<victim.getName()<<", and I like otters!"<<std::endl;
	return (out);
}

#endif