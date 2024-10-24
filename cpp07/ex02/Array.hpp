#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array&	operator=(const Array &other);
		~Array();
		T& operator[](unsigned int len);
		const T& operator[](unsigned int len) const;
		unsigned int size() const;
	private:
		unsigned int n;
		T* ar;
};

# include "Array.tpp"

# endif