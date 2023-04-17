#include "Cat.hpp"

Cat::Cat()
{
	std::cout<<"Cat main Constructor called\n\n";
	this->type = "Cat";
	this->_Brain = new Brain;
}

Cat::Cat(const Cat &other): Animal()
{
	std::cout<<"Cat Assign Constructor called \n\n";
	this->type = other.type;
	this->_Brain = other._Brain;
}

Cat::~Cat()
{
	std::cout<<"Cat class destructor called\n\n";
	delete this->_Brain;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout<<"Cat Assign operator called\n\n";
	if (this != &other)
	{
		this->type = other.type;
		*this->_Brain = *other._Brain;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<<"Miaoooo....Miaaaao\n\n";
}