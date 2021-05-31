#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception> 

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int		grade;
		Bureaucrat();

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &ref);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &ref);

		std::string getName() const;
		int			getGrade() const;

		void increment();
		void decrement();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		void signForm(Form &ref);
		void executeForm(Form const &form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif