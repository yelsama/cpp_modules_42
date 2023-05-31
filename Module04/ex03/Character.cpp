#include "Character.hpp"

Character::Character()
{

}

Character::Character(const Character &other)
{
	this->_name = other._name;
	for (int i = 0; i < IDX_N; i++)
		this->_materia[i] = other._materia[i];
}

Character::~Character()
{

}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (int i = 0; i < IDX_N; i++)
			this->_materia[i] = other._materia[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < IDX_N; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			return;
		}
	}
}
