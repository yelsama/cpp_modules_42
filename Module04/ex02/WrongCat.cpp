#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout<<"WrongCat main Constructor called\n\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &oher): WrongAnimal()
{
	std::cout<<"WrongCat Assign Constructor called \n\n";
	this->type = oher.type;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat class destructor called\n\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout<<"WrongCat Assign operator called\n\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout<<"Miaoooo....Miaaaao\n\n";
}
