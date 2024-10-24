#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();
		Intern&	operator=(const Intern &other);
		AForm *makeForm(std::string form, std::string target);
	private:

};

# endif