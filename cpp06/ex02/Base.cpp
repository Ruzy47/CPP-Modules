#include "Base.hpp"

Base* generate(void)
{
	int r = rand() % 3;
	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else if (r == 2)
		return (new C());
	return nullptr;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return;
	}
	catch (std::bad_cast&) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void) b;
		return;
	}
	catch (std::bad_cast&) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void) c;
		return;
	}
	catch (std::bad_cast&) {}
}