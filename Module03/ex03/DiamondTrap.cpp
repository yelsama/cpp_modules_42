#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout<<"this is Diamond main constructor\n\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout<<"DiamondTrap constructor with name ("<<this->_name<<")\n\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<this->_name<<" DiamondTrap destructor called\n\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout<<"DiamondTrap Copy Constructor called\n\n";
	this->_name = other._name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout<<"DiamondTrap assignment operator called\n\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}


void DiamondTrap::whoAmI()
{
	std::cout<<"this is whoAmI function from DiamondTrap\n";
	std::cout<<"DiamondTrap Object Name: "<<this->_name<<"\n";
	std::cout<<"ClapTrap Object Name is: "<<ClapTrap::_name<<"\n\n";
}