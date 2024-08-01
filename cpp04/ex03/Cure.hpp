#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& t);
		Cure& operator=(const Cure& t);
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
		~Cure();
};

#endif