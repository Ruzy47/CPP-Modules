#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	brain = new Brain();
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog(const Dog& t) : AAnimal(t)
{
	*this = t;
	std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
	std::cout << "Assignment operator called for Dog" << std::endl;
	if (this != &t)
	{
		delete this->brain;
		this->brain = new Brain(*t.brain);
	}
	return (*this);
}

Brain &Dog::getBrain(void) const
{
	return (*this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Haf...Haf..." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout<< "Destructor called for Dog " << std::endl;
}