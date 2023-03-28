#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout<<"zombie object: "<<name<<" destructed\n";
};

void	Zombie::announce(void)
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
