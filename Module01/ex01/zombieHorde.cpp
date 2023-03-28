#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*hord;
	int		i = -1;

	hord = new Zombie[N];
	while (++i < N)
		hord[i].setName(name);
	return (hord);
}
