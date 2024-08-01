#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point(void);
		Point(const Point& t);
		Point& operator=(const Point& t);
		Point(const float &a, const float &b);
		~Point(void);
		const Fixed getX(void) const;
		const Fixed getY(void) const;
};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

#endif
