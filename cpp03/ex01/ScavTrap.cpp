#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default is a ClapTrap." << std::endl;
	this->attack_d = 20;
	this->hit_point = 100;
	this->energy = 50;
	std::cout << "ScavTrap is created." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Default is a ClapTrap." << std::endl;
	this->name = name;
	this->attack_d = 20;
	this->hit_point = 100;
	this->energy = 50;
	std::cout << "ScavTrap " << this->name << " is created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& t)
{
	*this = t;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& t)
{
	if (this != &t)
	{
		this->name = t.name;
		this->attack_d = t.attack_d;
		this->energy = t.energy;
		this->hit_point = t.hit_point;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout<< "Destructor called for ScavTrap " << this->name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_point < 1)
		std::cout << "ScavTrap " << this->name << " is already dead, and can't be repaired!" << std::endl;
	else if (!this->energy)
			std::cout << "ScavTrap " << this->name << " don't have enough energy for repainring!" << std::endl;
	else
	{
		this->energy--;
		std::cout << "ScavTrap " << this->name << " attacks " << target <<", causing " << this->attack_d << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout<< "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}