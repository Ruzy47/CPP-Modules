#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Moxes")
{
	std::cout << "AAnimal Moxes is created." << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "AAnimal " << this->type << " is created." << std::endl;
}

AAnimal::AAnimal(const AAnimal& t)
{
	*this = t;
	std::cout << "Copy constructor called for AAnimal" << this->type << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& t)
{
	std::cout << "Assignment operator called for AAnimal" << this->type << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

const std::string	&AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::setType(std::string str)
{
	this->type = str;
}

AAnimal::~AAnimal()
{
	std::cout<< "Destructor called for AAnimal " << this->type << std::endl;
}