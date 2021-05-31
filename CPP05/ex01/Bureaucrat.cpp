#include "Bureaucrat.hpp"

void checkGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	checkGrade(grade);
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	*this = ref;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &ref)
{
	if (this == &ref)
		return (*this);
	checkGrade(grade);
	grade = ref.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int			Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::increment()
{
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrement()
{
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Too low\n");
}

void Bureaucrat::signForm(Form &ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout<<"<"<<name<<"> signs <"<<ref.getName()<<">"<<std::endl;
	}
	catch (std::exception &e)
	{
		std::cout<<"<"<<name<<"> cannot sign <"<<ref.getName()<<">"
				<<" because of "<<e.what();
	}

}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out<<"<"<<bureaucrat.getName()<<">, bureaucrat grade <"
			<<bureaucrat.getGrade()<<">."<<std::endl;
	return (out);
}