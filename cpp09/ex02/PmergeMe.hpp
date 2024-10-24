#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <deque>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sys/time.h>
#include <cctype>

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe&	operator=(const PmergeMe &other);

		PmergeMe(const std::vector<int> stack);
		PmergeMe(const std::deque<int> stack);
		std::vector<int> pushback_vec(int argc, char **argv);
		std::deque<int> pushback_deq(int argc, char **argv);

		~PmergeMe();
	private:
		std::vector<int>	vec;
		std::deque<int>		deq;
};

void sorting(std::vector<int> &vec);
std::vector<int> *pairs(const std::vector<int> &vec);
void sorting(std::deque<int> &deq);
std::deque<int> *pairs(const std::deque<int> &deq);

# endif