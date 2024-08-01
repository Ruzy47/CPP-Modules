#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice is created" << std::endl;
}

Ice::Ice(const Ice& t) : AMateria(t)
{
	*this = t;
	std::cout << "Copy constructor called for Ice" << std::endl;
}

Ice& Ice::operator=(const Ice& t)
{
	std::cout << "Assignment operator called for Ice" << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Destructor called for Ice " << std::endl;
}