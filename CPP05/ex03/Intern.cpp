#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &ref)
{
	*this = ref;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern &ref)
{
	(void)ref;
	return (*this);
}

Form *createPresidentialPardonForm(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return (form);
}

Form *createRobotomyRequestForm(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return (form);
}

Form *createShrubberyCreationForm(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return (form);
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string formType[3] =
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	//함수 포인터 타입
	//함수 포인터에 담긴 함수는 Form *를 리턴
	Form* (*create_form[3])(std::string) = 
	{
		createPresidentialPardonForm,
		createRobotomyRequestForm,
		createShrubberyCreationForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formType[i])
		{
			std::cout<<"Intern creates <"<<formName<<">"<<std::endl;
			return (create_form[i](formTarget));
		}
	}
	throw InvalidFormException();
	return (0);
}


const char *Intern::InvalidFormException::what() const throw()
{
	return ("Exception: Invalid Form\n");
}

/*
	create_form[0](formTarget)
	func1()
	{
		return (new )
	}

	Form (*fcnPtr)(std::string) = 
	PresidentialPardonForm *intern(formTarget);
*/