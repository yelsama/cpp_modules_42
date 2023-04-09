#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("entity");
	ClapTrap b(a);
	ClapTrap c("ignore");

	c.beRepaired(42);
	c = b;
	c.beRepaired(42);

	a.takeDamage(33);
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	b.attack("wolf");
	return 0;
}
