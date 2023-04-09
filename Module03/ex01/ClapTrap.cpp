#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout<<"Main ClapTrap constructor\n";
	_name = "Original";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"Claptrap constructor with name ("<<name<<")\n";
	_name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout<<this->_name<<" ClapTrap destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout<<"ClapTrap Copy Constructor called\n";
	this->_name = other._name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout<<"ClapTrap assignment operator called\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout<<"attack called from ClapTrap\n";
	if (this->energy_points < 1)
	{
		std::cout<<this->_name<<" has No Energy to perform\n";
		return;
	}
	if (this->hit_points < 1)
	{
		std::cout<<this->_name<<" has No Hit point to attack "<<target<<"\n";
		return;
	}
	this->energy_points--;
	std::cout<<"ClapTrap "<<this->_name<<" attacks "<<target<<", causing "<<this->attack_damage<<" points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<"takeDamage called from ClapTrap\n";
	std::cout<<this->_name<<" took damage of "<<amount<<std::endl;
	if (amount > hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout<<"beRepaired called from Claptrap\n";
	if (this->energy_points < 1)
	{
		std::cout<<this->_name<<" has No Energy to repair itself\n";
		return;
	}
	this->energy_points--;
	this->hit_points += amount;
	std::cout<<this->_name<<" got repaired with "<<amount<<" hit points\n";
}
