#include "Dog.hpp"

Dog::Dog()
{
	std::cout<<"Dog main Constructor called\n\n";
	this->type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog &other): Animal()
{
	std::cout<<"Dog Assign Constructor called \n\n";
	this->type = other.type;
	this->_brain = other._brain;
}

Dog::~Dog()
{
	std::cout<<"Dog class destructor called\n\n";
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout<<"Dog Assign operator called\n\n";
	if (this != &other)
	{
		this->type = other.type;
		this->_brain = other._brain;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout<<"Hoofff....Hoff\n\n";
}