#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

static void testForm(Bureaucrat& bur, Form* form)
{
    std::cout << std::endl << "Sign & Execute " << form->getName() << ": " << std::endl;
    bur.signForm(*form);
    bur.executeForm(*form);
}

static void testIntern(Intern& intern, const std::string &form_name, const std::string &target_name)
{
    Bureaucrat sign("hson", 1);
    Form *totest = NULL;

    std::cout << std::endl;
	try {
    	totest = intern.makeForm(form_name, target_name);
		testForm(sign, totest);
        delete totest;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	Intern someRandomIntern;

    testIntern(someRandomIntern, "presidential pardon", "target1");
    testIntern(someRandomIntern, "robotomy request", "target2");
    testIntern(someRandomIntern, "shrubbery creation", "target3");
    testIntern(someRandomIntern, "doesn't exist", "target_error");
}