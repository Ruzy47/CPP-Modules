#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class AForm;

class ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &t);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &t);
		std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
	private:
		const std::string target;
};

# endif