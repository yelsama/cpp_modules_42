#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("S_trap");
	ClapTrap b("C_trap");

	a.takeDamage(20);
	a.attack("another");
	b.attack("another");
	b.takeDamage(20);
	b.attack("another");
	a.beRepaired(3);
	b.beRepaired(12);
	b.attack("another");
	a.guardGate();

	return 0;
}
