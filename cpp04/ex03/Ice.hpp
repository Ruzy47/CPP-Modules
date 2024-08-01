#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& t);
		Ice& operator=(const Ice& t);
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
		~Ice();
};

#endif