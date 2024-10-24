#include "Base.hpp"

Base::~Base() {};

int main() {
	srand(static_cast<unsigned int>(time(0)));

	Base* base = generate();

	identify(base);
	identify(*base);

	delete base;
	return 0;
}
