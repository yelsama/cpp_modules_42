#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_materia[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource & other);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource & other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif