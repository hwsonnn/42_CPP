#include <iostream>
#include <string>

void ToChar(std::string str)
{
	std::cout << "char: ";
	try
	{
		int val = std::stoi(str);
		if (val >= 32 && val < 127)
			std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;			
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void ToInt(std::string str)
{
	std::cout << "int: ";
	try
	{
		int val = std::stoi(str);
		std::cout << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void ToFloat(std::string str)
{
	std::cout << "float: ";
	try
	{
		float val = std::stof(str);
		if (val - static_cast<int>(val) == 0)
			std::cout << val << ".0f" << std::endl;
		else
			std::cout << val << "f" << std::endl;

	}
	catch (std::out_of_range &e)
	{
		std::cout << "inff" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "nanf" << std::endl;
	}
}

void ToDouble(std::string str)
{
	std::cout << "double: ";
	try
	{
		double val = std::stod(str);
		if (val - static_cast<int>(val) == 0)
			std::cout << val << ".0" << std::endl;
		else
			std::cout << val << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "inf" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "nan" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong argument error" << std::endl;
		return (-1);
	}
	std::string str = argv[1];

	ToChar(str);
	ToInt(str);
	ToFloat(str);
	ToDouble(str);
	
	return (0);
}