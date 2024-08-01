#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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