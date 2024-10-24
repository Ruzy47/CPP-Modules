#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : vec(0), deq(0) {}

PmergeMe::PmergeMe(const PmergeMe &other)
{
		deq = other.deq;
		vec = other.vec;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) 
{
	if (this != &other) {
		deq = other.deq;
		vec = other.vec;
	}
	return *this;
}

PmergeMe::PmergeMe(const std::vector<int> stack) : vec(stack), deq() {}

PmergeMe::PmergeMe(const std::deque<int> stack) : vec(), deq(stack) {}

std::vector<int> PmergeMe::pushback_vec(int argc, char **argv)
{
	int i = 0;
	while (++i != argc)
		vec.push_back(std::stoi(argv[i]));
	return (vec);
}

std::deque<int> PmergeMe::pushback_deq(int argc, char **argv)
{
	int i = 0;
	while (++i != argc)
		deq.push_back(std::stoi(argv[i]));
	return (deq);
}

PmergeMe::~PmergeMe() {}

std::vector<int> *pairs(const std::vector<int> &vec)
{
	std::vector<int> *pair;
	int n = vec.size();
	int i = -1;
	int f = 0;

	pair = new std::vector<int>[n / 2];
	while (++i < n / 2)
	{
		if (vec[f] > vec[f + 1])
		{
			pair[i].push_back(vec[f + 1]);
			pair[i].push_back(vec[f]);
			f += 2;
		}
		else
		{
			pair[i].push_back(vec[f]);
			f++;
			pair[i].push_back(vec[f]);
			f++;
		}
	}
	return (pair);
}

int find_small(std::vector<int> smalls)
{
	int n = smalls.size();
	int i = -1;
	int f = 0;

	if (n == 1)
		return (0);
	while (++i != n)
		if (smalls[i] < smalls[f])
			f = i;
	return (f);
}

int search(std::vector<int> bigs, int n)
{
	int middle;
	int prev = 0;
	int next = bigs.size() - 1;

	while (prev <= next)
	{
		middle = (next + prev) / 2;
		if (n == bigs[middle])
			return (middle + 1);
		else if (n > bigs[middle])
			prev = middle + 1;
		else if (n < bigs[middle])
			next = middle - 1;
	}
	return (prev);
}

void sorting(std::vector<int> &vec)
{
	std::vector<int> *pair = pairs(vec);
	std::vector<int> smalls;
	std::vector<int> bigs;
	int n = vec.size();
	int i = -1;
	int small;
	int s;

	while (++i != n / 2)
	{
		smalls.push_back(pair[i][0]);
		bigs.push_back(pair[i][1]);
	}
	if (n > 3)
		sorting(bigs);
	small = find_small(smalls);
	bigs.insert(bigs.begin(), smalls[small]);
	smalls.erase(smalls.begin() + small);
	while (smalls.size() > 0)
	{
		small = find_small(smalls);
		s = search(bigs, smalls[small]);
		bigs.insert(bigs.begin() + s, smalls[small]);
		smalls.erase(smalls.begin() + small);
	}
	if (n % 2 != 0)
	{
		s = search(bigs, vec[n - 1]);
		bigs.insert(bigs.begin() + s, vec[n - 1]);
	}
	vec = bigs;
	delete [] pair;
}

std::deque<int> *pairs(const std::deque<int> &deq)
{
	std::deque<int> *pair;
	int n = deq.size();
	int i = -1;
	int f = 0;

	pair = new std::deque<int>[n / 2];
	while (++i < n / 2)
	{
		if (deq[f] > deq[f + 1])
		{
			pair[i].push_back(deq[f + 1]);
			pair[i].push_back(deq[f]);
			f += 2;
		}
		else
		{
			pair[i].push_back(deq[f]);
			f++;
			pair[i].push_back(deq[f]);
			f++;
		}
	}
	return (pair);
}

int find_small(std::deque<int> smalls)
{
	int n = smalls.size();
	int i = -1;
	int f = 0;

	if (n == 1)
		return (0);
	while (++i != n)
		if (smalls[i] < smalls[f])
			f = i;
	return (f);
}

int search(std::deque<int> bigs, int n)
{
	int middle;
	int prev = 0;
	int next = bigs.size() - 1;

	while (prev <= next)
	{
		middle = (next + prev) / 2;
		if (n == bigs[middle])
			return (middle + 1);
		else if (n > bigs[middle])
			prev = middle + 1;
		else if (n < bigs[middle])
			next = middle - 1;
	}
	return (prev);
}

void sorting(std::deque<int> &deq)
{
	std::deque<int> *pair = pairs(deq);
	std::deque<int> smalls;
	std::deque<int> bigs;
	int n = deq.size();
	int i = -1;
	int small;
	int s;

	while (++i != n / 2)
	{
		smalls.push_back(pair[i][0]);
		bigs.push_back(pair[i][1]);
	}
	if (n > 3)
		sorting(bigs);
	small = find_small(smalls);
	bigs.insert(bigs.begin(), smalls[small]);
	smalls.erase(smalls.begin() + small);
	while (smalls.size() > 0)
	{
		small = find_small(smalls);
		s = search(bigs, smalls[small]);
		bigs.insert(bigs.begin() + s, smalls[small]);
		smalls.erase(smalls.begin() + small);
	}
	if (n % 2 != 0)
	{
		s = search(bigs, deq[n - 1]);
		bigs.insert(bigs.begin() + s, deq[n - 1]);
	}
	deq = bigs;
	delete [] pair;
}