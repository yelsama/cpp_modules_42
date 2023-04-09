#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	a("Massa");
	// ClapTrap b(a);
	a.attack("enemy");
	a.beRepaired(20);
	a.highFivesGuys();
	a.takeDamage(100);
	a.attack("enemy");
	a.takeDamage(1);
	a.attack("another enemy");
	
	a.whoAmI();
	return 0;
}
