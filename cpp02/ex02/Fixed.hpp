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
		bool operator<(const Fixed& a) const;
		bool operator>(const Fixed& a) const;
		bool operator>=(const Fixed& a) const;
		bool operator<=(const Fixed& a) const;
		bool operator==(const Fixed& a) const;
		bool operator!=(const Fixed& a) const;
		Fixed operator+(const Fixed& a) const;
		Fixed operator-(const Fixed& a) const;
		Fixed operator*(const Fixed& a) const;
		Fixed operator/(const Fixed& a) const;
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
};

std::ostream& operator <<(std::ostream& stream, const Fixed& matrix);

#endif