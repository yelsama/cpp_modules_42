#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < IDX_N; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	for (int i = 0; i < IDX_N; i++)
	{
		if (other._materia[i])
		{
			this->_materia[i] = other._materia[i]->clone();
		}
		else this->_materia[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource & other)
{
	if (this != &other)
	{
		for (int i = 0; i < IDX_N; i++)
		{
			if (other._materia[i])
			{
				this->_materia[i] = other._materia[i]->clone();
			}
			else this->_materia[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}
