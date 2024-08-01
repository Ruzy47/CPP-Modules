#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& t);
		Animal& operator=(const Animal& t);
		const std::string &getType(void) const;
		void setType(std::string str);
		virtual void makeSound(void) const;
		virtual ~Animal();
};

#endif