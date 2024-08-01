#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat is created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& t) : WrongAnimal(t)
{
	*this = t;
	std::cout << "Copy constructor called for WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& t)
{
	std::cout << "Assignment operator called for WrongCat" << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongMyau...WrongMyau..." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<< "Destructor called for WrongCat " << std::endl;
}