#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(5, 3);
	Point b(0, 0);
	Point c(3, -3);
	Point d(3.5, 1.5);

	if (bsp(a, b, c, d) == 1)
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is not inside the triangle." << std::endl;
	return 0;
}