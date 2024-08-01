#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default is a ClapTrap." << std::endl;
	this->attack_d = 30;
	this->hit_point = 100;
	this->energy = 100;
	std::cout << "FragTrap is created." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Default is a ClapTrap." << std::endl;
	this->name = name;
	this->attack_d = 20;
	this->hit_point = 100;
	this->energy = 50;
	std::cout << "FragTrap " << this->name << " is created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& t)
{
	*this = t;
}

FragTrap& FragTrap::operator=(const FragTrap& t)
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

FragTrap::~FragTrap()
{
	std::cout<< "Destructor called for FragTrap " << this->name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout<< "FragTrap " << this->name << " displays a positive high fives request." << std::endl;
}