#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	write_file();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	base = other.base;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		base = other.base;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void	BitcoinExchange::fillData(const std::string data)
{
	int n = data.find(",");
	std::string ptr = data.substr(0, n);
	std::string bit = data.substr(n + 1);
	base.insert(std::pair<std::string, double>(ptr, std::stod(bit)));
}

void BitcoinExchange::write_file(void)
{
	std::ifstream file;
	std::string data;

	file.open("data.csv");
	if (!file.is_open())
		throw std::out_of_range("Wrong data file!");
	while (std::getline(file, data))
		if (data[0] == '2')
			fillData(data);
}

void BitcoinExchange::find_data(std::string ptr, double bit)
{
	std::map<std::string, double>::iterator it = base.lower_bound(ptr);
	if (it->first != ptr)
		--it;
		std::cout << ptr << " => " << bit << " = " << it->second * bit << std::endl;
}

int mon(int year,int day)
{
	int flag = 0;
	int i = 2008;
	while (i < year)
	{
		i += 4;
		if (i == year)
			flag = 1;
	}
	if (flag == 1)
		if (day > 29)
			return (1);
	if (flag == 0)
		if (day > 28)
			return (1);
	return (0);
}

int err(std::string ptr)
{
	if (ptr[4] != '-' || ptr[7] != '-')
		return (1);
	int i = -1;
	while (ptr[++i])
	{
		if (!std::isdigit(ptr[i]) && (i == 4 || i == 7) && ptr[i] == '-')
			;
		else if (std::isdigit(ptr[i]))
			;
		else
			return (1);
	}
	int n = ptr.find("-");
	int year = std::stoi(ptr.substr(0, n));
	std::string str = ptr.substr(n + 1);
	n = str.find("-");
	int month = std::stoi(str.substr(0, n));
	int day = std::stoi(str.substr(n + 1));
	if (year < 2009 || month > 12 || month == 0 || day == 0)
		return (1);
	if (month == 1 || month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12)
		if (day > 31)
			return (1);
	if (month == 4 || month == 6 || month == 9 || month == 11)
		if (day > 30)
			return (1);
	if (month == 2 && mon(year,day))
		return (1);
	return (0);
}

void BitcoinExchange::input(char *ptr)
{
	std::ifstream file;
	std::string data;
	std::string str;

	file.open(ptr);
	if (!file.is_open())
		throw std::out_of_range("Wrong data file!");
	std::getline(file, data);
	if (data != "date | value")
		throw std::out_of_range("Invalid input file!");
	while (std::getline(file, data))
	{
		int n = data.find("|");
		if (n != -1)
			str = data.substr(0, n - 1);
		if (err(str) || n == -1)
		{
			std::cerr << "Error: bad input => ";
			std::cerr << data << std::endl;
		}
		else
		{
			// std::cout << str << std::endl;
			std::string bit = data.substr(n + 1);
			if (bit.size() > 4 || std::stoi(bit) > 1000)
				std::cerr << "Error: too large a number." << std::endl;
			else if (std::stoi(bit) < 0)
				std::cerr << "Error: not a positive number." << std::endl;
			else
				find_data(str, std::stod(bit));
		}
	}
}