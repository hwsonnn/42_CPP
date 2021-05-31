#include "Pony.hpp"

Pony::Pony(std::string mem_, std::string name_)
{
	memory = mem_;
	name = name_;
	std::cout << name << " is on " << memory << std::endl;
}

Pony::~Pony(void)
{
	std::cout << name << " destructor is called." << std::endl;
}
