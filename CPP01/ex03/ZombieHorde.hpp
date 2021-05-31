#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class ZombieHorde
{
	private:
		Zombie	*zb;
		int		N;

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce(void);
};

#endif