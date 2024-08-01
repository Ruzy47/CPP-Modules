#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					n;
		static const int	bit;

	public:
		Fixed(void);
		Fixed(const Fixed& t);
		Fixed& operator=(const Fixed& t);
		~Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator <<(std::ostream& stream, const Fixed& matrix);

#endif