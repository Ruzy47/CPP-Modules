#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongMoxes")
{
	std::cout << "WrongAnimal Moxes is created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal " << this->type << " is created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& t)
{
	*this = t;
	std::cout << "Copy constructor called for WrongAnimal" << this->type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& t)
{
	std::cout << "Assignment operator called for WrongAnimal" << this->type << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

const std::string	&WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string str)
{
	this->type = str;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongXsh...WrongXsh..." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "Destructor called for WrongAnimal " << this->type << std::endl;
}