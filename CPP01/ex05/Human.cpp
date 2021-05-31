#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Hello, Human!" << std::endl;
}

std::string	Human::identify(void) const
{
	return (brain.identify());
}

const Brain&	Human::getBrain(void) const
{
	const Brain& ref = brain;

	return (ref);
}