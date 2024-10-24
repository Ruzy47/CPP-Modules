#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>

class RPN {
	public:
		~RPN();
		RPN();
		RPN(const RPN &other);
		RPN& operator=(const RPN &other);
		std::stack<int> GetRPN(void);

		void op(int n, char c);
		void dvijok(char *ptr);
	private:
		std::stack<int>	nums;
};


# endif