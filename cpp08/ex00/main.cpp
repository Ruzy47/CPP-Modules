#include "easyfind.hpp"

int main(void)
{
	try {
		std::vector<int> vec;

		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);

		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found value: " << *it << std::endl;

		easyfind(vec, 6);
	} catch (const std::out_of_range& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}