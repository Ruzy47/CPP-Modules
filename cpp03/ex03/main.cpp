#include "DiamondTrap.hpp"

int main()
{
	
	ClapTrap a;
	ClapTrap b("Cody");

	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 0; i < 2; i++)
		b.attack("Cody-clone");
	b.beRepaired(3);

	ScavTrap c;
	ScavTrap d("Savage");

	c.attack("CloneTrap");
	for (int i = 0; i < 5; i++)
		c.attack("CloneTrap");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("Savage-clone");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("ScavTrap-clone");

	FragTrap e;
	FragTrap f("Chadd");

	e.highFivesGuys();
	e.attack("some random dude");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("some random dude");
	f.highFivesGuys();

	DiamondTrap r;
	DiamondTrap g("Giga Chadd");
	DiamondTrap p(r);

	r.whoAmI();
	r.attack("some super random dude");
	g.whoAmI();
	f.attack("Chadd-clone");
	p.whoAmI();

	return (0);
}
