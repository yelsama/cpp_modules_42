#include "FragTrap.hpp"

int main()
{
	FragTrap a("F_trap");
	ClapTrap b("C_trap");

	a.highFivesGuys();
	a.attack("another");
	b.attack("another");
	a.takeDamage(20);
	a.attack("anoter");
	b.takeDamage(20);
	b.attack("another");
	a.takeDamage(20);
	a.attack("anoter");

	return 0;
}
