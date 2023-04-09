#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<<"main ScavTrap constructo\n\n";
	_name = "Scav_default";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout<<"ScavTrap constructor with name ("<<name<<")\n\n";
	_name = name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout<<this->_name<<" ScavTrap destructor called\n\n";
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout<<"ScavTrap copy constructor\n\n";
	this->_name = other._name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout<<"ScavTrap assignment operator\n\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout<<"attack called from ScavTrap\n";
	if (this->energy_points < 1)
	{
		std::cout<<this->_name<<" has No Energy to perform\n\n";
		return;
	}
	if (this->hit_points < 1)
	{
		std::cout<<this->_name<<" has No Hit point to attack "<<target<<"\n\n";
		return;
	}
	this->energy_points--;
	std::cout<<"ScavTrap "<<this->_name<<" attacks "<<target<<", causing "<<this->attack_damage<<" points of damage!\n\n";
}

void	ScavTrap::guardGate()
{
	std::cout<<"ScavTrap is now in Gate keeper mode\n\n";
}