#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie	*z_horde;

	z_horde = zombieHorde(3, "part_of_hord");
	int i = -1;
	while (++i < 3)
		z_horde[i].announce();
	delete [] z_horde;
	return (0);
}
