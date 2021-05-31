#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::cout<<"ZombieEvent 실행!"<<std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout<<"ZombieEvent 소멸!"<<std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *zb = new Zombie(name, type);
	return (zb);
}