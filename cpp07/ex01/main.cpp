#include "iter.hpp"

// void ft_tolower(char &arr)
// {
// 	arr = std::tolower(static_cast<unsigned char>(arr));
// }

// void ft_toupper(char &arr)
// {
// 	arr = std::toupper(static_cast<unsigned char>(arr));
// }

// int main()
// {
// 	char a[] = {'A', 'B', 'F'};

// 	std::cout << "Original:" <<
// 	"\n\ta[0]: " << a[0] <<
// 	"\n\ta[1]: " << a[1] <<
// 	"\n\ta[2]: " << a[2] <<
// 	std::endl << std::endl;

// 	::iter(a, sizeof(a) / sizeof(char), ft_tolower);

// 	std::cout << "Changed:" <<
// 	"\n\ta[0]: " << a[0] <<
// 	"\n\ta[1]: " << a[1] <<
// 	"\n\ta[2]: " << a[2] <<
// 	std::endl << std::endl;

// 	::iter(a, 2, ft_toupper);

// 	std::cout << "Changed:" <<
// 	"\n\ta[0]: " << a[0] <<
// 	"\n\ta[1]: " << a[1] <<
// 	"\n\ta[2]: " << a[2] <<
// 	std::endl << std::endl;
// }

class Awesome
{
	public:
		Awesome(void): _n(42) {return ;}
		int	get(void) const {return (this->_n);}
	private:
		int	_n;
};

std::ostream& operator<<(std::ostream & o, Awesome const & rhs)
{
	o << rhs.get();
	return o;
}

template< typename T >
void print(T& x)
{
	std::cout << x << std::endl;
	return;
}

int	main(void)
{
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print<const int>);
	iter(tab2, 5, print<Awesome>);
	return (0);
}