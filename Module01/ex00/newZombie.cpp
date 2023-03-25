#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*mr_z;

	mr_z = new Zombie(name);
	return (mr_z);
}
