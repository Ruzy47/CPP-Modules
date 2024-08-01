#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure is created" << std::endl;
}

Cure::Cure(const Cure& t) : AMateria(t)
{
	*this = t;
	std::cout << "Copy constructor called for Cure" << std::endl;
}

Cure& Cure::operator=(const Cure& t)
{
	std::cout << "Assignment operator called for Cure" << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Destructor called for Cure " << std::endl;
}