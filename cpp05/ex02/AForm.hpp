#ifndef A_FORM_HPP
# define A_FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm();
		AForm(const std::string name, int sign_grade, int exec_grade, std::string target);
		AForm(const AForm &other);
		virtual ~AForm();
		AForm&	operator=(const AForm &other);
		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& bur);
		const std::string getIsSigned()const;
		virtual void execute(Bureaucrat const &executor) const = 0;
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
		class NotSigned : public std::exception
		{
			public:
				virtual char const* what() const throw();
		};
	private:
		const std::string name;
		const int sign_grade;
		const int exec_grade;
		bool sign;
		const std::string target;
};

# endif