#include "Bureaucrat.hpp"

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
	return (*this);
	std::cout << "Assignment operator called for Bureaucrat " << this->name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat " << this->name << std::endl;
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
	return ("Grade is too high, it should be more then 0");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low, it should be less then 151");
}

std::ostream& operator <<(std::ostream& stream, const Bureaucrat& t)
{
	return (stream << t.getName() << " have grade " << t.getGrade() << std::endl); 
}