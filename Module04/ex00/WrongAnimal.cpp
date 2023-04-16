#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<<"WrongAnimal main Constructor called\n\n";
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal Destructor called\n\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout<<"WrongAnimal Copy Constructor called\n\n";
	this->type = other.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout<<"WrongAnimal Assign Operator called\n\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout<<"Ahaaaaaa, sound from wrong animal class\n\n";
}
