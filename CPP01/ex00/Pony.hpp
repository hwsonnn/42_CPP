#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	private:
		std::string memory;
		std::string name;

	public:
		Pony(std::string mem_, std::string name_);
		~Pony(void);
};

#endif