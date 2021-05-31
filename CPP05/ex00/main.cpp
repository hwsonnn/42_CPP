#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat A("A", 1);
	std::cout << A;
	try
	{
		A.increment();
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}

	Bureaucrat B("B", 3);
	std::cout << B;
	try
	{
		B.increment();
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}

	Bureaucrat C("C", 150);
	std::cout << C;
	try
	{
		C.decrement();
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}

	Bureaucrat D("D", 149);
	std::cout << D;
	try
	{
		D.decrement();
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}

	Bureaucrat E("E", 5);
	std::cout << E;
	E = D;
	std::cout << E;
	try
	{
		E.increment();
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}
}