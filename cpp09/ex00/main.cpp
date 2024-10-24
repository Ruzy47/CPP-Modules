#include "BitcoinExchange.hpp"



int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw std::out_of_range("Invalid input!");
		BitcoinExchange btc;
		btc.input(argv[1]);
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}