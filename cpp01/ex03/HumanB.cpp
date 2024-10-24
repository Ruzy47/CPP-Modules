#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon (NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &type)
{
	this->weapon = &type;
}

void HumanB::attack(void)
{
	if (weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}