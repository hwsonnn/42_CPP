#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm &ref);

		virtual void	execute(Bureaucrat const &executor) const;
};

#endif
