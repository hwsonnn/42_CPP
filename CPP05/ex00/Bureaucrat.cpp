#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
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
	if (ref.getGrade() < 1)
		throw GradeTooHighException();
	if (ref.getGrade() > 150)
		throw GradeTooLowException();
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out<<"<"<<bureaucrat.getName()<<">, bureaucrat grade <"
			<<bureaucrat.getGrade()<<">."<<std::endl;
	return (out);
}