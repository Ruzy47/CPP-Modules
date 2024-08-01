#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& t);
		FragTrap& operator=(const FragTrap& t);
		virtual ~FragTrap();
		void highFivesGuys(void);
};

#endif