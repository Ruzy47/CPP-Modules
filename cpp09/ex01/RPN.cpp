#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other): nums(other.nums) {}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
		nums = other.nums;
	return *this;
}

std::stack<int> RPN::GetRPN(void)
{
	return (this->nums);
}

RPN::~RPN() {}

void RPN::op(int n, char c)
{
	if (this->nums.size() < 2)
		throw std::out_of_range("Invalid input!");
	int x = this->nums.top();
	this->nums.pop();
	int y = this->nums.top();
	this->nums.pop();
	if (c == '+')
		n = y + x;
	else if (c == '-')
		n = y - x;
	else if (c == '*')
		n = y * x;
	else if (c == '/')
	{
		if (x == 0)
			throw std::out_of_range("Division by zero!");
		n = y / x;
	}
	else
		throw std::out_of_range("Invalid input!");
	this->nums.push(n);
}

void RPN::dvijok(char *ptr)
{
	int i = -1;

	while (ptr[++i] != '\0')
	{
		if (std::isdigit(ptr[i]))
			this->nums.push(ptr[i] - '0');
		else if (ptr[i] == '+' || ptr[i] == '-' || ptr[i] == '*' || ptr[i] == '/')
			op(0, ptr[i]);
	}
	if (this->nums.size() == 1)
		std::cout << this->nums.top() << std::endl;
	else
		throw std::out_of_range("Invalid input!");
}