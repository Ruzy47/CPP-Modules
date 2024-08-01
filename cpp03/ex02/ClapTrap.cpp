#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap is created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->attack_d = 0;
	this->energy = 10;
	this->hit_point = 10;
	std::cout << "ClapTrap " << this->name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& t)
{
	*this = t;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& t)
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

ClapTrap::~ClapTrap()
{
	std::cout<< "Destructor called for ClapTrap " << this->name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_point < 1)
		std::cout << "ClapTrap " << this->name << " is already dead, and can't be repaired!" << std::endl;
	else if (!this->energy)
			std::cout << "ClapTrap " << this->name << " don't have enough energy for repainring!" << std::endl;
	else
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " << this->attack_d << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		std::cout << "Wrong number of amount!" << std::endl;
	else
	{
		if (amount >= this->hit_point)
		{
			this->hit_point = 0;
			std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		}
		else
		{
			this->hit_point -= amount;
			std::cout << "ClapTrap " << this->name << " took " << amount <<" points of damage!" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		std::cout << "Wrong number of amount!" << std::endl;
	else if (this->hit_point < 1)
		std::cout << "ClapTrap " << this->name << " is already dead, and can't be repaired!" << std::endl;
	else
	{
		if (!this->energy)
			std::cout << "ClapTrap " << this->name << " don't have enough energy for repainring!" << std::endl;
		else
		{
			this->energy--;
			this->hit_point += amount;
			std::cout << "ClapTrap " << this->name << " took " << amount <<" points for repairing!" << std::endl;
		}
	}
}