#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class AForm;

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &t);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &t);
		std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
	private:
		const std::string target;
};

# endif