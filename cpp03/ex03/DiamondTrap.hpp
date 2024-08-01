#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& t);
		DiamondTrap& operator=(const DiamondTrap& t);
		~DiamondTrap();
		void whoAmI();
		void attack(const std::string& target);
};