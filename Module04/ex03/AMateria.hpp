#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:

		AMateria(void);

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria & other);
		~AMateria();
		AMateria & operator=(const AMateria & other);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif