#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "Character " << this->name << " is created." << std::endl;
}

Character::Character(const Character& t)
{
	if (this != &t)
	{
		this->name = t.name;
		for(int i = 0; i < 4; i++)
		{
			materia[i] = NULL;
			if (t.materia[i])
				this->materia[i] = t.materia[i]->clone();
		}
	}
	std::cout << "Copy constructor called for Character" << this->name << std::endl;
}

Character& Character::operator=(const Character& t)
{
	std::cout << "Assignment operator called for Character" << this->name << std::endl;
	if (this != &t)
	{
		this->name = t.name;
		for(int i = 0; i < 4; i++)
		{
			delete materia[i];
			materia[i] = NULL;
			this->materia[i] = t.materia[i]->clone();
		}
	}
	return (*this);
}

void Character::equip(AMateria* m)
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

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 && materia[idx] != NULL)
		materia[idx] = NULL;
	else
		std::cout << "This item not found!" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && materia[idx] != NULL)
		materia[idx]->use(target);
	else
		std::cout << "Wrong materia!" << std::endl;
}

Character::~Character()
{
	std::cout<< "Destructor called for Character " << this->name << std::endl;
}