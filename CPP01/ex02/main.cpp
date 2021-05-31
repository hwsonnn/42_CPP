#include "ZombieEvent.hpp"

void	randomChump(std::string type)
{
	srand(time(NULL));
	int random = rand() % 10 + 1;
	
	std::string name;
	for (int i = 0; i < random; i++)
		name += rand() % 26 + 'a';

	Zombie zb(name, type);
	zb.announce();
}

int	main(void)
{
	Zombie zb1("hson", "hee");
	zb1.announce();

	ZombieEvent ze;
	ze.setZombieType("hyo");
	Zombie *zb2 = ze.newZombie("hyopark");
	zb2->announce();
	delete zb2;
	zb2 = 0;

	randomChump("chany");

	return (0);
}