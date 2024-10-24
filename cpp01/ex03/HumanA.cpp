#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : name(name), weapon (type)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}