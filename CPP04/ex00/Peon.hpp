#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	protected:
		Peon();

	public:
		Peon(std::string name);
		virtual ~Peon();
		Peon(const Peon& src);
		Peon& operator=(const Peon& src);

		virtual void getPolymorphed() const; //파생클래스에서는 virtual을 생략해도 무방
};

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


#endif