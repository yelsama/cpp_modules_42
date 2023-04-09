#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<<"main FragTrap constructo\n\n";
	_name = "Scav_default";
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout<<"FragTrap constructor with name ("<<name<<")\n\n";
	_name = name;
	// hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

FragTrap::~FragTrap()
{
	std::cout<<this->_name<<" FragTrap destructor called\n\n";
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout<<"FragTrap copy constructor\n\n";
	this->_name = other._name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout<<"FragTrap assignment operator\n\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout<<"FragTrap is high five guys\n\n";
}
