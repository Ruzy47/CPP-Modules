#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Buro"), grade(150)
{
	std::cout << "Bureaucrat Buro is created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	this->grade = grade;
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "Bureaucrat " << this->name << " is created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& t)
{
	*this = t;
	std::cout << "Copy constructor called for Bureaucrat " << this->name << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& t)
{
	if (this != &t)
		this->grade = t.grade;
	std::cout << "Assignment operator called for Bureaucrat " << this->name << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat " << this->name << std::endl;
}

void Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed by " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn’t executed " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	this->grade--;
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrement()
{
	this->grade++;
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high, it should be more");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low, it should be less");
}

std::ostream& operator <<(std::ostream& stream, const Bureaucrat& t)
{
	return (stream << t.getName() << " have grade " << t.getGrade()); 
}