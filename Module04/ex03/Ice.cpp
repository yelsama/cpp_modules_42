#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{

}

Ice::Ice(const Ice &other): AMateria(other)
{

}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Ice::~Ice()
{

}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter & target)
{
	std::cout<<"* heals "<<target.getName()<<"'s wounds *\n";
}
