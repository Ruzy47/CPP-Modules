#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
	public:
		Span();
		Span(unsigned int i);
		Span(const Span &other);
		~Span();
		Span&	operator=(const Span &other);
		void addNumber(int number);
		std::vector<int> getArray(void) const;
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void fillnum(unsigned int x);
	private:
		std::vector<int> array;
		unsigned int n;
};

# endif