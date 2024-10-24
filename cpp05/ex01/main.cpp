#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form	a("Contract", 42, 42);
	Form	b(a);
	Form	c = b;

	std::cout << "a:\n" << a << std::endl;
	std::cout << "b:\n" << b << std::endl;
	std::cout << "c:\n" << c << std::endl;

	std::cout << "---- Case 1 ----" << std::endl;
	try
	{
		Form	a("A", 150 + 1, 150 - 1);
		std::cout << a << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---- Case 2 ----" << std::endl;
	try
	{
		Form	b("B", 1 - 1, 42);
		std::cout << b << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---- Case 3 ----" << std::endl;
	try
	{
		Bureaucrat	s1("Student", 1);
		std::cout << s1 << std::endl;
		Form	c1("C1", 1, 2);
		Form	c2("C2", 90, 150);
		std::cout << c1 << std::endl;
		std::cout << c2 << std::endl;
		c1.beSigned(s1);
		c2.beSigned(s1);
		c1.beSigned(s1);
		std::cout << c1 << std::endl;
		std::cout << c2 << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---- Case 4 ----" << std::endl;
	try
	{
		Bureaucrat	s2("Student2", 150);
		std::cout << s2 << std::endl;
		Form	c3("C3", 1, 2);
		std::cout << c3 << std::endl;
		s2.signForm(c3);
		std::cout << c3 << std::endl;
		c3.beSigned(s2);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
