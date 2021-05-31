#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat A("A", 1);
	std::cout << A;

	Form form("cloud form", 40, 30);
	std::cout << form;

	A.signForm(form);

	Bureaucrat B("B", 39);
	std::cout << B;
	B.signForm(form);
	try
	{
		B.decrement();
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}
	std::cout << B;
	B.signForm(form);


	std::cout <<"\n--------------------form error test!---------------\n";

	try
	{
		Form form2("form2", 0, 100);
		std::cout << form2;
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}


	try
	{
		Form form3("form3", 0, 150);
		std::cout << form3;
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}

	try
	{
		Form form4("form4", 6, 3);
		std::cout << form4;
		Form form3("form3", 5, 10);
		form4 = form3; 		//scope 개념!
		std::cout << form4;	//const 이기 때문에 안바뀌는 것이 정상!
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}

	try
	{
		Form form5("form5", 151, 3);
		std::cout << form5;
	}
	catch (std::exception &e) 
	{
		std::cout << e.what();
	}


}