#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	protected:
		std::string name;
	
		Victim();

	public:
		Victim(std::string name);
		virtual ~Victim();
		Victim(const Victim& src);
		Victim& operator=(const Victim& src);

		std::string getName() const;

		virtual void getPolymorphed() const;
};

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

#endif