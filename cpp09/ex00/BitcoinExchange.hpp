#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>

class BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange&	operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void find_data(std::string ptr, double bit);
		void write_file(void);
		void fillData(const std::string data);
		void input(char *ptr);

	private:
		std::map<std::string, double> base;

};

# endif