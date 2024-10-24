#include "AForm.hpp"

AForm::AForm() : name("Hello"), sign_grade(50), exec_grade(50), sign(false), target("default")
{
	std::cout << "AForm Hello is created" << std::endl;
}

AForm::AForm(const std::string name, int sign_grade, int exec_grade, std::string target) : name(name), sign_grade(sign_grade), exec_grade(exec_grade), sign(false), target("default")
{
	(void)target;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw (AForm::GradeTooHighException());
	else if (this->sign_grade > 150 || this->exec_grade > 150)
		throw (AForm::GradeTooLowException());
	std::cout << "AForm " << this->name << " is created" << std::endl;
}

AForm::AForm(const AForm& t) : name(t.name), sign_grade(t.sign_grade), exec_grade(t.exec_grade)
{
	*this = t;
	std::cout << "Copy constructor called for AForm " << this->name << std::endl;
}

AForm& AForm::operator=(const AForm& t)
{
	if (this != &t)
		this->sign = t.sign;
	std::cout << "Assignment operator called for AForm " << this->name << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor called for AForm " << this->name << std::endl;
}

void AForm::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->getSignGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getIsSigned() == "true")
		std::cout << this->getName() << " AForm is already signed" << std::endl;
	else
	{
		this->sign = true;
		std::cout << this->getName() << " AForm was signed by " << bur.getName() << std::endl;
	}
}

std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getSignGrade() const
{
	return (this->sign_grade);
}

int AForm::getExecGrade() const
{
	return (this->exec_grade);
}

const std::string	AForm::getIsSigned(void)const
{
	if (this->sign)
		return ("true");
	else
		return ("false");
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (sign == false)
		throw NotSigned();
	if (executor.getGrade() > exec_grade)
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Sign_Grade is too high, it should be more then 0");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Sign_Grade is too low, it should be less then 151");
}

const char* AForm::NotSigned::what() const throw()
{
	return ("Form isn't signed");
}

std::ostream& operator <<(std::ostream& stream, const AForm& t)
{
	return (stream << t.getName() << " have sign_grade " << t.getSignGrade() 
		<< " have exec_grade " << t.getExecGrade() << " is signed " << t.getIsSigned()); 
}