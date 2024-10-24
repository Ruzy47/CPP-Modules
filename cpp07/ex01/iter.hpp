#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cctype>

template <typename T>
void iter(T* str, int n, void(*ev)(T&))
{
	int i = -1;
	while (++i != n)
		ev(str[i]);
}

template <typename T>
void iter(T* str,int n, void(*ev)(const T&))
{
	int i = -1;
	while (++i != n)
		ev(str[i]);
}

# endif