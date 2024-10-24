#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class AForm;

class RobotomyRequestForm : public AForm{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &t);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &t);
		std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
	private:
		const std::string target;
};

# endif