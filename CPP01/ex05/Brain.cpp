#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Hello, Brain!" << std::endl;
}

std::string	Brain::identify(void) const
{
	std::ostringstream oss;

	oss << this;
	return (oss.str());
}