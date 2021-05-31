#include "Form.hpp"

void checkGradeForm(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooHighException();
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) 
		: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
	checkGradeForm(gradeToSign);
	checkGradeForm(gradeToExec);
}


Form::Form(const Form &ref)
		: name(ref.name), isSigned(false), gradeToSign(ref.gradeToSign), gradeToExec(ref.gradeToExec)
{
	checkGradeForm(gradeToSign);
	checkGradeForm(gradeToExec);
}

Form::~Form()
{
}

Form& Form::operator=(const Form &ref)
{
	if (this == &ref)
		return (*this);
	isSigned = ref.getSigned();
	return (*this);
}

std::string Form::getName() const
{
	return (name);
}

bool		Form::getSigned() const
{
	return (isSigned);
}

int			Form::getGradeToSign() const
{
	return (gradeToSign);
}

int			Form::getGradeToExec() const
{
	return (gradeToExec);
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() < gradeToSign)
		isSigned = true;
	else
		throw GradeTooLowException();

}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Too high grade\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Too low grade\n");
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out<<"Name : "<<form.getName()
		<<"\nSign status : "<<form.getSigned()
		<<"\nGrade to sign : "<<form.getGradeToSign()
		<<"\nGrade to exec : "<<form.getGradeToExec()
		<<std::endl;
	return (out);
}