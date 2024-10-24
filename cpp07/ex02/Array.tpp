#include "Array.hpp"

template <typename T>
Array<T>::Array() : n(0), ar(nullptr) {}

template <typename T>
Array<T>::Array(unsigned int n) : n(n) 
{
	ar = new T[n]();
}

template <typename T>
Array<T>::Array(const Array &other) : n(other.n)
{
	unsigned int i = 0;
	ar = new T[other.n]();
	while (i++ != other.n)
		ar[i] = other.ar[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	int i = -1;

	if (this != &other)
	{
		delete[] ar;
		ar = new T[other.n]();
		n = other.n;
		while (++i != n)
			ar[i] = other.ar[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] ar;
}

template <typename T>
T& Array<T>::operator[](unsigned int len)
{
	if (len >= n)
		throw std::out_of_range("Len is oversize");
	return (ar[len]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int len) const 
{
	if (len >= n)
		throw std::out_of_range("Len is oversize");
	return (ar[len]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (n);
}
