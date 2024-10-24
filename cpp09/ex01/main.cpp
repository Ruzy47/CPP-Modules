#include "RPN.hpp"

int err(char *argv)
{
	int i = -1;
	std::string line = "0123456789+-*/ ";

	while (argv[++i])
		if (line.find(argv[i]) == std::string::npos)
			return (1);
	return (0);
}

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2 || err(argv[1]))
			throw std::out_of_range("Invalid input!");
		std::string str = argv[1];
		RPN rpn;
		rpn.dvijok(argv[1]);
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return (0);
}
