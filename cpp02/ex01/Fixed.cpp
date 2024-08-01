#include "Fixed.hpp"

int const Fixed::bit = 8;

Fixed::Fixed()
{
	this->n = 0;
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

Fixed::Fixed(const int num)
{
	int n;

	n = std::pow(2, bit);
	this->n = num * n;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	int n;

	n = std::pow(2, bit);
	this->n = roundf(num * n);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->n);
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}

int Fixed::toInt(void) const 
{
	return (this->n / std::pow(2, bit));
}

float Fixed::toFloat(void) const
{
	return ((float)this->n / std::pow(2, bit));
}

std::ostream& operator <<(std::ostream& stream, const Fixed& num)
{
	return (stream << num.toFloat());
}