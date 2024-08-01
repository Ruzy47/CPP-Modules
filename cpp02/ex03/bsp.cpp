#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	float s;
	float t1;
	float t2;
	float t3;

	s = abs((b.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat())
		 - (c.getX().toFloat() - a.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat())) / 2;

	t1 = abs((b.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat())
		 - (point.getX().toFloat() - a.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat())) / 2;
	
	t2 = abs((b.getX().toFloat() - point.getX().toFloat()) * (c.getY().toFloat() - point.getY().toFloat())
		 - (c.getX().toFloat() - point.getX().toFloat()) * (b.getY().toFloat() - point.getY().toFloat())) / 2;

	t3 = abs((point.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat())
		 - (c.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat())) / 2;

	return (s == (t1 + t2 + t3));
}