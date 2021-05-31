#ifndef Intern_HPP
# define Intern_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &ref);
		~Intern();
		Intern& operator=(const Intern &ref);

		Form *makeForm(std::string formName, std::string formTarget);

		class InvalidFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif