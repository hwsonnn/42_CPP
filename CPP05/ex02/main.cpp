#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	{
		PresidentialPardonForm pp("hson");
		std::cout << pp << std::endl;
		RobotomyRequestForm rq("hyeonski");
		std::cout << rq << std::endl;
		ShrubberyCreationForm sc("jiholee");
		std::cout << sc << std::endl;


		Bureaucrat A("A", 1);
		std::cout << A << std::endl;

		A.signForm(pp);
		A.executeForm(pp);
		std::cout << "\n";

		A.signForm(rq);
		A.executeForm(rq);
		std::cout << "\n";

		A.signForm(sc);
		A.executeForm(sc);
		std::cout << "\n";
	}

	PresidentialPardonForm pp("hson");
	std::cout << pp << std::endl;
	RobotomyRequestForm rq("hyeonski");
	std::cout << rq << std::endl;
	ShrubberyCreationForm sc("jiholee2");
	std::cout << sc << std::endl;

	Bureaucrat B("B", 80);
	std::cout << B << std::endl;

	B.signForm(pp);
	B.executeForm(pp);
	std::cout << "\n";

	B.signForm(rq);
	B.executeForm(rq);
	std::cout << "\n";

	B.signForm(sc);
	B.executeForm(sc);
	std::cout << "\n";


	// std::cout <<"\n--------------------form error test!---------------\n";

	// try
	// {
	// 	Form form2("form2", 0, 100);
	// 	std::cout << form2;
	// }
	// catch (std::exception &e) 
	// {
	// 	std::cout << e.what();
	// }


	// try
	// {
	// 	Form form3("form3", 0, 150);
	// 	std::cout << form3;
	// }
	// catch (std::exception &e) 
	// {
	// 	std::cout << e.what();
	// }

	// try
	// {
	// 	Form form4("form4", 6, 3);
	// 	std::cout << form4;
	// 	Form form3("form3", 5, 10);
	// 	form4 = form3; 		//scope 개념!
	// 	std::cout << form4;	//const 이기 때문에 안바뀌는 것이 정상!
	// }
	// catch (std::exception &e) 
	// {
	// 	std::cout << e.what();
	// }

	// try
	// {
	// 	Form form5("form5", 151, 3);
	// 	std::cout << form5;
	// }
	// catch (std::exception &e) 
	// {
	// 	std::cout << e.what();
	// }


}