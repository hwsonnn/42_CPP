#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "str : \"" << str << "\"" <<  std::endl;
	std::cout << "by pointer : \n\"" << *ptr << "\"" << std::endl;
	std::cout << "by reference : \n\"" << ref << "\"" << std::endl;

	return (0);
}