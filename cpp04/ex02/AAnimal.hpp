#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& t);
		AAnimal& operator=(const AAnimal& t);
		const std::string &getType(void) const;
		void setType(std::string str);
		virtual void makeSound(void) const = 0;
		virtual ~AAnimal();
};

#endif