#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < IDX_N; i++)
		this->_materia[i] = NULL;
}

Character::Character(const Character &other)
{
	this->_name = other._name;
	for (int i = 0; i < IDX_N; i++)
	{
		this->_materia[i] = other._materia[i]->clone();
	}
}

Character::~Character()
{
	for (int i = 0; i < IDX_N; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < IDX_N; i++)
			if(this->_materia[i])
				delete this->_materia[i];
		for(int i = 0; i < IDX_N; i++)
			if (other._materia[i])
				this->_materia[i] = other._materia[i]->clone();
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
	delete m;
}

void Character::unequip(int idx)
{
	if (idx >= IDX_N || idx < 0)
		return;
	delete this->_materia[idx];
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= IDX_N)
		return;
	if (this->_materia[idx])
		this->_materia[idx]->use(target);
}