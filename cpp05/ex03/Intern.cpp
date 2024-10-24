#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = other;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this == &other) {
		return *this;
	}
	return *this;
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	int i = -1;
	std::string formTypes[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm* forms = NULL;

	while (++i < 3)
		if (!form.compare(formTypes[i]))
			break ;
	switch(i){
		case 0:
			forms = new RobotomyRequestForm(target);
			std::cout << "[ Intern creates RobotomyRequestForm ]" << std::endl;
			break;
		case 1:
			forms = new ShrubberyCreationForm(target);
			std::cout << "[ Intern creates ShrubberyCreationForm ]" << std::endl;
			break;
		case 2:
			forms = new PresidentialPardonForm(target);
			std::cout << "[ Intern creates PresidentialPardonForm ]" << std::endl;
			break;
		default:
			std::cout << "[ ERROR: Passed form name doesn't exist ]\n";
	}
	return (forms);
}
