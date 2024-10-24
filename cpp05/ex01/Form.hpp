#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(const std::string name, int sign_grade, int exec_grade);
		Form(const Form &other);
		~Form();
		Form&	operator=(const Form &other);
		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& bur);
		const std::string getIsSigned()const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual char const* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual char const* what() const throw();
		};
	private:
		const std::string name;
		const int sign_grade;
		const int exec_grade;
		bool sign;
};

std::ostream& operator <<(std::ostream& stream, const Form& t);

# endif