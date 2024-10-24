#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>
# include <iterator>

template <typename T>

class MutantStack : public std::stack<T> {
	public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {}
		~MutantStack() {}
		MutantStack&	operator=(const MutantStack &other);
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
};

# include "MutantStack.tpp"

# endif