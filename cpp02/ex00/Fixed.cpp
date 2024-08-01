#include "Fixed.hpp"

int const Fixed::bit = 8;

Fixed::Fixed() : n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& t)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = t;
}

Fixed &Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &t)
		this->n = t.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}