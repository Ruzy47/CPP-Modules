#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria " << this->type << " is created." << std::endl;
}

AMateria::AMateria(const AMateria& t)
{
	*this = t;
	std::cout << "Copy constructor called for AMateria" << this->type << std::endl;
}

AMateria& AMateria::operator=(const AMateria& t)
{
	std::cout << "Assignment operator called for AMateria" << this->type << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " has no materia" << std::endl;
}

const std::string	&AMateria::getType(void) const
{
	return (this->type);
}

AMateria::~AMateria()
{
	std::cout<< "Destructor called for AMateria " << this->type << std::endl;
}