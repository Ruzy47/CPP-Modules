#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Sleep";
	std::cout << "Brain is created." << std::endl;
}

Brain::Brain(const Brain& t)
{
	*this = t;
	std::cout << "Copy constructor called for Brain" << std::endl;
}

Brain& Brain::operator=(const Brain& t)
{
	std::cout << "Assignment operator called for Brain" << std::endl;
	if (this != &t)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = t.ideas[i];
	return (*this);
}

const std::string	&Brain::getIdea(int n) const
{
	return (this->ideas[n]);
}

void	Brain::setIdea(std::string str, int n)
{
	this->ideas[n] = str;
}

Brain::~Brain()
{
	std::cout<< "Destructor called for Brain" << std::endl;
}