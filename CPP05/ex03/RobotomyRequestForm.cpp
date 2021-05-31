#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
		: Form("Robotomy Request Form", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref)
		: Form(ref), target(ref.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	if (this == &ref)
		return (*this);
	Form::operator=(ref);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw NotSignedException();
	if (executor.getGrade() >= getGradeToExec())
		throw GradeTooLowException();
	std::cout << "drrrrrrrrrrrrrrrrr....." << std::endl;
	if (rand() % 2)
		std::cout<<"<"<<target<<"> has been robotomized successfully."<<std::endl;
	else
		std::cout<<"<"<<target<<"> failed to robotomized."<<std::endl;
}