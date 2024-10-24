#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

template <typename T>
typename T::iterator easyfind(T& cont, int n);

#include "easyfind.tpp"

# endif