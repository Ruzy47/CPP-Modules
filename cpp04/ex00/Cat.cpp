#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat is created" << std::endl;
}

Cat::Cat(const Cat& t) : Animal(t)
{
	*this = t;
	std::cout << "Copy constructor called for Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& t)
{
	std::cout << "Assignment operator called for Cat" << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Myau...Myau..." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat " << std::endl;
}