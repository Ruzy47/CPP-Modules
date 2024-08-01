#include "Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(const float &a, const float &b)
{
	this->x = a;
	this->y = b;
}

Point::Point(const Point& t)
{
	*this = t;
}

Point &Point::operator=(const Point& t)
{
	if (this != &t)
		*this = t;
	return (*this);
}

const Fixed Point::getX(void) const
{
	return (this->x);
}

const Fixed Point::getY(void) const
{
	return (this->y);
}

Point::~Point()
{
}