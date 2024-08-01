#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& t);
		ScavTrap& operator=(const ScavTrap& t);
		virtual ~ScavTrap();
		void guardGate();
		virtual void attack(const std::string& target);
};

#endif