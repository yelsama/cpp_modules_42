#include "Dog.hpp"

Dog::Dog()
{
	std::cout<<"Dog main Constructor called\n\n";
	this->type = "Dog";
}

Dog::Dog(const Dog &oher)
{
	std::cout<<"Dog Assign Constructor called \n\n";
	this->type = oher.type;
}

Dog::~Dog()
{
	std::cout<<"Dog class destructor called\n\n";
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout<<"Dog Assign operator called\n\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout<<"Hoofff....Hoff\n\n";
}