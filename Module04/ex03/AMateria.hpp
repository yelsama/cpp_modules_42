#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria(){};

	protected:
		std::string	_type;
		int			_index;

		AMateria(void);

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria & other);
		virtual ~AMateria();
		AMateria & operator=(const AMateria & other);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

#endif