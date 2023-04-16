#include "Cat.hpp"

Cat::Cat()
{
	std::cout<<"Cat main Constructor called\n\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &oher): Animal()
{
	std::cout<<"Cat Assign Constructor called \n\n";
	this->type = oher.type;
}

Cat::~Cat()
{
	std::cout<<"Cat class destructor called\n\n";
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout<<"Cat Assign operator called\n\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<<"Miaoooo....Miaaaao\n\n";
}