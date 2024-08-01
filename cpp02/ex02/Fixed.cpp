#include "Fixed.hpp"

int const Fixed::bit = 8;

Fixed::Fixed()
{
	this->n = 0;
}

Fixed::Fixed(const Fixed& t)
{
	*this = t;
}

Fixed &Fixed::operator=(const Fixed& t)
{
	if (this != &t)
		this->n = t.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed& a) const
{
	return (this->n < a.n);
}

bool Fixed::operator>(const Fixed& a) const
{
	return (this->n > a.n);
}

bool Fixed::operator<=(const Fixed& a) const
{
	return (this->n <= a.n);
}

bool Fixed::operator>=(const Fixed& a) const
{
	return (this->n >= a.n);
}

bool Fixed::operator==(const Fixed& a) const
{
	return (this->n == a.n);
}

bool Fixed::operator!=(const Fixed& a) const
{
	return (this->n != a.n);
}

Fixed Fixed::operator+(const Fixed& a) const
{
	return (this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed& a) const
{
	return (this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed& a) const
{
	return (this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed& a) const
{
	return (this->toFloat() * a.toFloat());
}

Fixed	Fixed::operator++(void)
{
	this->n++;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	this->n--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed prev(*this);
	++*this;
	return (prev);
}

Fixed	Fixed::operator--(int)
{
	Fixed prev(*this);
	--*this;
	return (prev);
}

Fixed::Fixed(const int num)
{
	int n;

	n = std::pow(2, bit);
	this->n = num * n;
}

Fixed::Fixed(const float num)
{
	int n;

	n = std::pow(2, bit);
	this->n = roundf(num * n);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed::~Fixed()
{
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