#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat 
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& t);
		Bureaucrat& operator=(const Bureaucrat& t);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		class GradeTooHighException : public std::exception
		{
			char const* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			char const* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& t);

#endif