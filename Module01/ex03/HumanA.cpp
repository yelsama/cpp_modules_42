#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &type): weapon(type)
{
	name = str;
}

HumanA::~HumanA(){}

void	HumanA::setWeapon(Weapon &type)
{
	weapon = type;
}

void	HumanA::attack()
{
	std::cout<<name<<" attacks with their "<<weapon.getType()<<std::endl;
}
