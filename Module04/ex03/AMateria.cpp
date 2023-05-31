#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	this->_type = other._type;
	this->_index = other._index;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_index = other._index;
	}
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

AMateria *AMateria::clone() const
{
	//object of abstract class type "AMateria" is not allowed:
	// return (new AMateria(*this));
}

void AMateria::use(ICharacter & target)
{
	(void)target;
}
