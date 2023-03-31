#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*hord;
	int		i = -1;

	if (N < 0)
		return (NULL);
	hord = new Zombie[N];
	while (++i < N)
		hord[i].setName(name);
	return (hord);
}
