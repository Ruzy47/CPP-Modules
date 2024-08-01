#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& t);
		MateriaSource& operator=(const MateriaSource& t);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

#endif