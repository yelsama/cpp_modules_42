#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::~Zombie()
{
	std::cout<<"zombie object: "<<name<<" destructed\n";
};

void	Zombie::announce(void)
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
