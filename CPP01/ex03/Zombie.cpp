#include "Zombie.hpp"

Zombie::Zombie()
{
	std::string name;
	std::string type;
	
	for (int i = 0; i < 4; i++)
	{
		name += rand() % 26 + 'a';
		type += rand() % 26 + 'A';
	}
	this->name = name;
	this->type = type;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{
	std::cout<<"<"<<name<<" ("<<type<<")> Bye!"<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<"<"<<name<<" ("<<type<<")> Braiiiiiiinnnssss..."<<std::endl;	
}