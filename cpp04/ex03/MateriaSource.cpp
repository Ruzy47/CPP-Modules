#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource " << " is created." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& t)
{
	if (this != &t)
	{
		for(int i = 0; i < 4; i++)
		{
			materia[i] = NULL;
			if (t.materia[i])
				this->materia[i] = t.materia[i]->clone();
		}
	}
	std::cout << "Copy constructor called for MateriaSource" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& t)
{
	std::cout << "Assignment operator called for MateriaSource" << std::endl;
	if (this != &t)
	{
		for(int i = 0; i < 4; i++)
		{
			delete materia[i];
			this->materia[i] = t.materia[i]->clone();
		}
	}
	return (*this);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->materia[i] && this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	}
	std::cout << "Item isn't the same type or isn't exist" << std::endl;
	return (0);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	int x = 0;

	for (i = 0; i < 4; i++)
	{
		if (this->materia[i] == m)
		{
			std::cout << "This item already exist!" << std::endl;
			x = 2;
			break ;
		}
		if (this->materia[i] == NULL)
		{
			x = 1;
			this->materia[i] = m;
		}
	}
	if (x == 0)
		std::cout << "Inventory is full!" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout<< "Destructor called for MateriaSource " << std::endl;
}