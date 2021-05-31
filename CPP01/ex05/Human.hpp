#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Brain.hpp"

class Human
{
	private:
		const Brain brain;

	public:
		Human();
		std::string		identify(void) const;
		const Brain&	getBrain(void) const;
};

#endif