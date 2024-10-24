#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& cont, int n)
{
	typename T::iterator ptr = std::find(cont.begin(), cont.end(), n);
	if (ptr == cont.end())
		throw (std::out_of_range("Not found!"));
	return ptr;
}
