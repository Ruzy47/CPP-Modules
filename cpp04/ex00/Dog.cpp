#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog(const Dog& t) : Animal(t)
{
	*this = t;
	std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
	std::cout << "Assignment operator called for Dog" << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Haf...Haf..." << std::endl;
}

Dog::~Dog()
{
	std::cout<< "Destructor called for Dog " << std::endl;
}