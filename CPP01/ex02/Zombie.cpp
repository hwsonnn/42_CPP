#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout<<"Zombie 생성!"<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<"Zombie 소멸자!"<<std::endl;
	std::cout<<"<"<<name<<" ("<<type<<")> Bye!"<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<"<"<<name<<" ("<<type<<")> Braiiiiiiinnnssss..."<<std::endl;	
}