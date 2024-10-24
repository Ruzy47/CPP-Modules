#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "target")
{
	std::cout << "PresidentialPardonForm is created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5, target), target(target)
{
	std::cout << "PresidentialPardonForm is created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& t) : target(getTarget())
{
	*this = t;
	std::cout << "Copy constructor called for PresidentialPardonForm " << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& t)
{
	(void) t;
	std::cout << "Assignment operator called for PresidentialPardonForm " << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called for PresidentialPardonForm " << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator <<(std::ostream& stream, const PresidentialPardonForm& t)
{
	return (stream << t.getName() << " have sign_grade " << t.getSignGrade() 
		<< " have exec_grade " << t.getExecGrade() << " is signed " << t.getIsSigned()); 
}