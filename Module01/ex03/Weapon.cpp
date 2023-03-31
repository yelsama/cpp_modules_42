#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string weapon): type(weapon)
{
};

Weapon::~Weapon(){};

const std::string &Weapon::getType(void)  
{
	return type;
}

void	Weapon::setType(std::string str)
{
	type = str;
}
