#include "Zombie.hpp"
#include <iostream>

void randomChump(std::string name);
Zombie* newZombie( std::string name );

int	main(void)
{
	Zombie	*mr_dinamic_z;

	mr_dinamic_z = newZombie("Heap_Z");
	randomChump("Stack_Z");
	mr_dinamic_z->announce();
	delete mr_dinamic_z;
	return (0);
}
