#include "Animal.hpp"

Animal::Animal() : type("Moxes")
{
	std::cout << "Animal Moxes is created." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal " << this->type << " is created." << std::endl;
}

Animal::Animal(const Animal& t)
{
	*this = t;
	std::cout << "Copy constructor called for Animal" << this->type << std::endl;
}

Animal& Animal::operator=(const Animal& t)
{
	std::cout << "Assignment operator called for Animal" << this->type << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string str)
{
	this->type = str;
}

void	Animal::makeSound(void) const
{
	std::cout << "Xsh...Xsh..." << std::endl;
}

Animal::~Animal()
{
	std::cout<< "Destructor called for Animal " << this->type << std::endl;
}