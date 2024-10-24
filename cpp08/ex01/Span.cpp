#include "Span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int i) : array(i), n(0) {}

Span::Span(const Span &other) : array(other.array), n(other.n) {}

Span &Span::operator=(const Span &other)
{
	std::cout << "[ Span copy assignment operator called ]" << std::endl;
	if (this != &other) {
		array = other.array;
		n = other.n;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
	if (array.size() == n)
		throw (std::out_of_range("Stack is full!"));
	array[n] = number;
	n++;
}

unsigned int Span::shortestSpan()
{
	std::vector<int> a;
	int index = -1;
	int f = -1;
	int i = -1;

	if (n <= 1)
		throw (std::out_of_range("Stack is full!"));
	a = array;
	std::sort(a.begin(), a.end());
	while (++i != (int)n - 1)
	{
		f = a[i + 1] - a[i];
		if (index == -1 || index > f)
			index = f;
	}
	return (index);
}

unsigned int Span::longestSpan()
{
	if (n <= 1)
		throw (std::out_of_range("Stack is full!"));
	std::sort(array.begin(), array.end());
	return (array[array.size() - 1] - array[0]);
}

std::vector<int> Span::getArray(void) const
{
	return (array);
}

int random_num(void)
{
	int randomValue = rand() ^ (rand() << 15) ^ (rand() >> 7);
	return (randomValue % 10000);
}

void Span::fillnum(unsigned int x)
{
	unsigned int a = -1;
	std::srand(static_cast<unsigned int>(std::time(0)));
	if (x > (int)array.size() - n)
		throw (std::out_of_range("Stack is full!"));
	while (++a != x - 1)
		array.push_back(random_num());
	n = n + x;
}
