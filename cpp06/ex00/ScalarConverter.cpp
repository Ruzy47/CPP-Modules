#include "ScalarConverter.hpp"

void print_int(const std::string &literal, double value)
{
	if (value <= std::numeric_limits<int>::max() || value >= std::numeric_limits<int>::min())
		std::cout << "int: " << literal << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << value << ".0" << std::endl;
}

void print_float(double value, int flag)
{
	if (value <= std::numeric_limits<int>::max() || value >= std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (flag == 1)
	{
		std::cout << "float: " << value << ".0f" << std::endl;
		std::cout << "double: " << value << ".0" << std::endl;
	}
	else if (flag == 0)
	{
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << value << std::endl;		
	}
}

void print_double(double value, int flag)
{
	if (value <= std::numeric_limits<int>::max() || value >= std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (flag == 1)
	{
		std::cout << "float: " << value << ".0f" << std::endl;
		std::cout << "double: " << value << ".0" << std::endl;
	}
	else if (flag == 0)
	{
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
}

int valid(const std::string &literal)
{
	unsigned long i = -1;
	int flag = 0;
	int n = 0;
	int pl_mn = 0;

	while (literal[++i])
	{

		if (literal[i] == '.')
		{
			if (flag == 1)
				return (1);
			flag = 1;
			n = i;
		}
		if (literal[i] == '+' || literal[i] == '-')
		{
			if (pl_mn == 1)
				return (1);
			pl_mn = 1;
		}
		if (isalpha(literal[i]) && literal[i] == 'f' && (i == literal.size() - 1) && flag == 1)
				return (2);
		else if (isalpha(literal[i]))
			return (1);
	}
	if (flag == 1)
		return (3);
	return (0);
}

std::string doubleToString(double value)
{
	std::ostringstream oss;
	oss << value;
	return oss.str();
}

void print_char(const std::string &literal)
{
	std::cout << "char: " << "'" << literal[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
	std::string str = literal;
	std::string ptr;
	double value;
	int flag = -1;

	int i = valid(literal);
	if (i == 2)
		str = str.substr(0, str.size() - 1);
	std::istringstream iss(str);
		iss >> value;
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (literal == "+inf" || literal == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	else if ( literal == "-inf" || literal == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	else if (literal.length() != 1 && i == 1)
	{
		std::cerr << "Invalid input" << std::endl;
		return ;
	}
	else if (literal.length() == 1 && !std::isdigit(literal[0]))
	{
		print_char(literal);
		return ;
	}
	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	ptr = doubleToString(value);
	if (ptr.find(".") != std::string::npos)
		flag = 0;
	else
		flag = 1;
	if (i == 2)
		print_float(value, flag);
	else if (i == 3)
		print_double(value, flag);
	else
		print_int(literal, value);
}

