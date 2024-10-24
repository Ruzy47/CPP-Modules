#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "target"), target("Steve")
{
	std::cout << "ShrubberyCreationForm is created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137, target), target(target)
{
	(void)target;
	std::cout << "ShrubberyCreationForm is created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& t) : target(getTarget())
{
	*this = t;
	std::cout << "Copy constructor called for ShrubberyCreationForm " << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& t)
{
	(void) t;
	std::cout << "Assignment operator called for ShrubberyCreationForm " << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called for ShrubberyCreationForm " << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream file(getTarget() + "_shrubbery");
	if (file.is_open())
	{
		file << "		  &&& &&  & &&" << std::endl <<
				"		&& &AA&AA& ()|/ @, &&" << std::endl <<
				"		&AA(/&/&||/& /_/)_&/" << std::endl <<
				"	&() &AA&|()|/&A % &" << std::endl <<
				"		&_AA_|& |& |&&/&__%_&" << std::endl <<
				"	&& && & &|& | /& & % ()& /&&" << std::endl <<
				"	()&_---()&A&AA%&_& && &" << std::endl <<
				"			&& A|||" << std::endl <<
				"				|||" << std::endl <<
				"				|||" << std::endl <<
				"				|||" << std::endl <<
				"			, -=-~  .-^- _" << std::endl << std::endl;
	}
	file.close();
	std::cout << this->getTarget() << " shrubbery has been created" << std::endl;
}

std::ostream& operator <<(std::ostream& stream, const ShrubberyCreationForm& t)
{
	return (stream << t.getName() << " have sign_grade " << t.getSignGrade() 
		<< " have exec_grade " << t.getExecGrade() << " is signed " << t.getIsSigned()); 
}