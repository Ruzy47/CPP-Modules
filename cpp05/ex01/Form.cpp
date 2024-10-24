#include "Form.hpp"

Form::Form() : name("Hello"), sign_grade(50), exec_grade(50), sign(false)
{
	std::cout << "Form Hello is created" << std::endl;
}

Form::Form(const std::string name, int sign_grade, int exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade), sign(false)
{
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw (Form::GradeTooHighException());
	else if (this->sign_grade > 150 || this->exec_grade > 150)
		throw (Form::GradeTooLowException());
	std::cout << "Form " << this->name << " is created" << std::endl;
}

Form::Form(const Form& t) : name(t.name), sign_grade(t.sign_grade), exec_grade(t.exec_grade)
{
	*this = t;
	std::cout << "Copy constructor called for Form " << this->name << std::endl;
}

Form& Form::operator=(const Form& t)
{
	if (this != &t)
		this->sign = t.sign;
	std::cout << "Assignment operator called for Form " << this->name << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor called for Form " << this->name << std::endl;
}

void Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->getSignGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getIsSigned() == "true")
		std::cout << this->getName() << " Form is already signed" << std::endl;
	else
	{
		this->sign = true;
		std::cout << this->getName() << " Form was signed by " << bur.getName() << std::endl;
	}
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecGrade() const
{
	return (this->exec_grade);
}

const std::string	Form::getIsSigned(void)const
{
	if (this->sign)
		return ("true");
	else
		return ("false");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("sign_Grade is too high, it should be more then 0");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("sign_Grade is too low, it should be less then 151");
}

std::ostream& operator <<(std::ostream& stream, const Form& t)
{
	return (stream << t.getName() << " have sign_grade " << t.getSignGrade() 
		<< " have exec_grade " << t.getExecGrade() << " is signed " << t.getIsSigned()); 
}