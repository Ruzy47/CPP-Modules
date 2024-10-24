#include "PmergeMe.hpp"

int err(int argc, char **argv)
{
	int i = 0;
	std::string line = "0123456789";

	while (++i != argc)
	{
		int x = -1;
		while (argv[i] && argv[i][++x])
			if (line.find(argv[i][x]) == std::string::npos)
				return (1);
	}
	return (0);
}

int is_sorted(int argc, char **argv)
{
	int i = 0;
	while ( ++i != argc && i + 1 != argc)
		if (std::stoi(argv[i + 1]) < std::stoi(argv[i]))
			return (1);
	return (0);
}

void before(int argc, char **argv)
{
	int i = 0;
	std::cout << "Before: ";
	if (argc > 6)
		while (++i != 5)
			std::cout << argv[i] << " ";
	if (argc == 6)
		while (++i != 6)
			std::cout << argv[i] << " ";
	if (argc < 6)
		while (++i != argc)
			std::cout << argv[i] << " ";
	if (argc > 6)
		std::cout << "[...]";
	std::cout << std::endl;
}

void after_vec(int argc, std::vector<int>	vec)
{
	int i = -1;
	std::cout << "After: ";
	if (argc > 6)
		while (++i != 4)
			std::cout << vec[i] << " ";
	if (argc == 6)
		while (++i != 5)
			std::cout << vec[i] << " ";
	if (argc < 6)
		while (++i != argc - 1)
			std::cout << vec[i] << " ";
	if (argc > 6)
		std::cout << "[...]";
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	PmergeMe merge;
	std::deque<int>		deq;
	std::vector<int>	vec;

	if (argc < 3)
	{
		std::cerr << "Invalid input!" << std::endl;
		return (1);
	}
	try
	{
		if (err(argc, argv) || !is_sorted(argc, argv))
			throw std::out_of_range("Invalid input!");
		before(argc, argv);
		clock_t start = clock();
		vec = merge.pushback_vec(argc, argv);
		sorting(vec);
		clock_t end = clock();
		double elapsed_us = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
		after_vec(argc, vec);
		std::cout << "Time to process a range of " << vec.size() \
			<< " elements with std::vector : " << elapsed_us << " us" << std::endl;
		start = clock();
		deq = merge.pushback_deq(argc, argv);
		sorting(deq);
		end = clock();
		elapsed_us = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
		std::cout << "Time to process a range of " << deq.size() \
			<< " elements with std::deque : " << elapsed_us << " us" << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}