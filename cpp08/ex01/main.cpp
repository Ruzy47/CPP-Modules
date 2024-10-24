#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		Span sp2 = Span(10000);
		std::vector<int> a;

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		sp2.fillnum(10000);

		a = sp.getArray();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		a = sp2.getArray();
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
