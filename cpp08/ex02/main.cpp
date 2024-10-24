#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737); 

	MutantStack<int>::iterator it;
	it = mstack.begin(); 
	MutantStack<int>::iterator ite;
	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	lst.pop_back();
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator list_it = lst.begin();
	std::list<int>::iterator list_ite = lst.end();
		
	std::cout << "List contents (using iterator):" << std::endl;
	while (list_it != list_ite) {
		std::cout << *list_it << std::endl;
		++list_it;
	}
	return 0;
}