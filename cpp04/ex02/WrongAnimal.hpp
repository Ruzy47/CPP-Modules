#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& t);
		WrongAnimal& operator=(const WrongAnimal& t);
		const std::string &getType(void) const;
		void setType(std::string str);
		void makeSound(void) const;
		virtual ~WrongAnimal();
};

#endif