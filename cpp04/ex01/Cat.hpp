#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat& t);
		Cat& operator=(const Cat& t);
		void makeSound(void) const;
		Brain &getBrain(void) const;
		virtual ~Cat();
};

#endif