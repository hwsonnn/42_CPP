#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class ZombieEvent
{
	private:
		std::string type;

	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
};

#endif