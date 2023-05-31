#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
	private:
	/* data */
	
	public:
		Ice();
		Ice(const & other);
		Ice &operator=(const &other);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter & target);
};

#endif