#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	Intern someRandomIntern;
	Bureaucrat john("John", 1);

	AForm* form;
		
	form = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form) {
		john.signForm(*form);
		john.executeForm(*form);
		delete form; // Не забудьте освободить память
	}

	form = someRandomIntern.makeForm("unknown form", "target");
	if (form) {
		delete form;
	}

	return 0;
}