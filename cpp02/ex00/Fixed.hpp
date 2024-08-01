#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif