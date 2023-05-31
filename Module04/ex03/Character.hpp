#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#define IDX_N 4

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria	*_materia[IDX_N];
	
	public:
		Character();
		Character(const Character &other);
		~Character();
		Character &operator=(const Character &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif