#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	name = str;
}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &type)
{
	weapn = &type;
}

void	HumanB::attack()
{
	std::cout<<name<<" attacks with their "<<weapn->getType()<<std::endl;
}
