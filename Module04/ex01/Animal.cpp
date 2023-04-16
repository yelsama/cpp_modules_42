#include "Animal.hpp"

Animal::Animal()
{
	std::cout<<"Animal main Constructor called\n\n";
}

std::string	Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout<<"Animal Destructor called\n\n";
}

Animal::Animal(const Animal &other)
{
	std::cout<<"Animal Copy Constructor called\n\n";
	this->type = other.type;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout<<"Animal Assign Operator called\n\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout<<"Ahaaaaa what is this\n\n";
}