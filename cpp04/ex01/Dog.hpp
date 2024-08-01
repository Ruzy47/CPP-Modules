#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog& t);
		Dog& operator=(const Dog& t);
		void makeSound(void) const;
		Brain &getBrain(void) const;
		virtual ~Dog();
};

#endif