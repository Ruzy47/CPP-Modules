#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::name = "default_clap_name";
	this->attack_d = FragTrap::attack_d;
	this->energy = ScavTrap::energy;
	this->hit_point = FragTrap::hit_point;
	std::cout << "DiamondTrap is created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::name = name + "_clap_name";
	this->attack_d = FragTrap::attack_d;
	this->energy = ScavTrap::energy;
	this->hit_point = FragTrap::hit_point;
	std::cout << "DiamondTrap " << this->name << " is created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& t)
{
	*this = t;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& t)
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

DiamondTrap::~DiamondTrap()
{
	std::cout<< "Destructor called for DiamondTrap " << this->name << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is " << this->name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::name << std::endl;
}