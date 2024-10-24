#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

// int main() {
// 	try {
// 		Bureaucrat alice("Alice", 50);
// 		Bureaucrat bob("Bob", 150);
// 		Bureaucrat charlie("Charlie", 1);

// 		ShrubberyCreationForm shrubbery("home");
// 		RobotomyRequestForm robotomy("target");
// 		PresidentialPardonForm pardon("Alice");

// 		alice.executeForm(shrubbery);  // Не получится, так как форма не подписана

// 		alice.signForm(shrubbery);	 // Подпишем
// 		alice.executeForm(shrubbery);  // Теперь должно сработать
		
// 		bob.signForm(robotomy);		// Bob не сможет подписать
// 		charlie.signForm(robotomy);	// Charlie подпишет
// 		charlie.executeForm(robotomy); // Charlie выполнит

// 		charlie.signForm(pardon);	  // Charlie подпишет
// 		charlie.executeForm(pardon);   // Charlie выполнит

// 	} catch (const std::exception& e) {
// 		std::cerr << "Error: " << e.what() << std::endl;
// 	}
// 	return 0;
// }

void	ShruberryTest(void) {
	std::cout << "[ TEST SHRUBERRY ]" << std::endl << std::endl;
	AForm	*A = new ShrubberyCreationForm();
	try {
		Bureaucrat	Carl("Carl", 1);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new ShrubberyCreationForm("Alex");
	try {
		Bureaucrat	Carl("Carl", 1);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new ShrubberyCreationForm();
	try {
		Bureaucrat	Carl("Carl", 1);

		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new ShrubberyCreationForm();
	try {
		Bureaucrat	Carl("Carl", 138);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new ShrubberyCreationForm();
	try {
		Bureaucrat	Carl("Carl", 150);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	A = new ShrubberyCreationForm();
	Bureaucrat	Carl("Carl", 150);
	Carl.signForm(*A);
	Carl.executeForm(*A);
	delete (A);
}

void	RobotomyTest(void) {
	std::cout << "[ TEST ROBOTOMY ]" << std::endl << std::endl;
	AForm	*A = new RobotomyRequestForm();
	try {
		Bureaucrat	Carl("Carl", 1);

		Carl.signForm(*A);
		A->execute(Carl);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new RobotomyRequestForm("Alex");
	try {
		Bureaucrat	Carl("Carl", 1);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new RobotomyRequestForm();
	try {
		Bureaucrat	Carl("Carl", 1);

		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new RobotomyRequestForm();
	try {
		Bureaucrat	Carl("Carl", 46);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new RobotomyRequestForm();
	try {
		Bureaucrat	Carl("Carl", 150);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete (A);
}

void	PresidentialTest(void) {
	std::cout << "[ TEST PRESIDENTIAL ]" << std::endl << std::endl;
	AForm	*A = new PresidentialPardonForm();
	try {
		Bureaucrat	Carl("Carl", 1);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new PresidentialPardonForm("Alex");
	try {
		Bureaucrat	Carl("Carl", 1);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new PresidentialPardonForm();
	try {
		Bureaucrat	Carl("Carl", 1);

		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new PresidentialPardonForm();
	try {
		Bureaucrat	Carl("Carl", 46);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete A;
	std::cout << std::endl << std::endl;
	A = new PresidentialPardonForm();
	try {
		Bureaucrat	Carl("Carl", 150);

		Carl.signForm(*A);
		A->execute(Carl);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete (A);
}

int main(void)
{
	ShruberryTest();
	std::cout << std::endl << std::endl;
	RobotomyTest();
	std::cout << std::endl << std::endl;
	PresidentialTest();
	return (0);
}