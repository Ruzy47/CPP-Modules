#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
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
	{
		delete this->brain;
		this->brain = new Brain(*t.brain);
	}
	return (*this);
}

Brain &Cat::getBrain(void) const
{
	return (*this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Myau...Myau..." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor called for Cat " << std::endl;
}