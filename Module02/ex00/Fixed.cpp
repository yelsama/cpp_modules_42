#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	fixed_p_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout<<"Copy constructor called\n";
	this->fixed_p_value = other.fixed_p_value;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout<<"Copy assignment operator called\n";
	if (this != &other)
	{
		this->fixed_p_value = other.fixed_p_value; 
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called\n";
	return this->fixed_p_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called\n";
	this->fixed_p_value = raw;
}
