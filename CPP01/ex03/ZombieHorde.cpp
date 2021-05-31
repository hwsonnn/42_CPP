#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::cout<<"ZombieHorde 생성!"<<std::endl;

	srand(time(NULL));

	this->N = N;
	zb = new Zombie[N];
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] zb;
	std::cout<<"ZombieHorde 소멸!"<<std::endl;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < N; i++)
		zb[i].announce();
}