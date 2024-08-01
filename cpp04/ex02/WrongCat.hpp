#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& t);
		WrongCat& operator=(const WrongCat& t);
		void makeSound(void) const;
		virtual ~WrongCat();
};

#endif