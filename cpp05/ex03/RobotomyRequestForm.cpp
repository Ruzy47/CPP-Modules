#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "target")
{
	std::cout << "RobotomyRequestForm is created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45, target), target(target)
{
	(void)target;
	std::cout << "RobotomyRequestForm is created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& t) : target(getTarget())
{
	*this = t;
	std::cout << "Copy constructor called for RobotomyRequestForm " << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& t)
{
	(void) t;
	std::cout << "Assignment operator called for RobotomyRequestForm " << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called for RobotomyRequestForm " << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "Drilling noises..." << std::endl;
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomy of " << getTarget() << " failed." << std::endl;
}

std::ostream& operator <<(std::ostream& stream, const RobotomyRequestForm& t)
{
	return (stream << t.getName() << " have sign_grade " << t.getSignGrade() 
		<< " have exec_grade " << t.getExecGrade() << " is signed " << t.getIsSigned()); 
}