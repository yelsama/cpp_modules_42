#ifndef	HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string	name;
	Weapon	&weapon;
public:
	HumanA(std::string str, Weapon &type);
	~HumanA();

	void	setWeapon(Weapon &type);

	void	attack();
};

#endif