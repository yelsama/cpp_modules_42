#ifndef	HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*weapn;
public:
	HumanB(std::string str);
	~HumanB();

	void	setWeapon(Weapon &type);

	void	attack();
};

#endif