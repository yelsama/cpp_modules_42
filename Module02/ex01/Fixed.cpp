#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout<<"Default constructor called\n";
	this->fixedPointNum = 0;
}

Fixed::Fixed(const int int_value)
{
	std::cout<<"Int constructor called\n";
	this->fixedPointNum = int_value << fraction_bits;
}

Fixed::Fixed(const float float_value)
{
	std::cout<<"Float constructor called\n";
	float	rounded_val = roundf(float_value * (1 << fraction_bits));
	this->fixedPointNum = static_cast<int>(rounded_val);
}

Fixed::Fixed(const Fixed &other)
{
	std::cout<<"Copy constructor called\n";
	this->fixedPointNum = other.fixedPointNum;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout<<"Copy assignment operator called\n";
	if (this != &other)
	{
		this->fixedPointNum = other.fixedPointNum;
	}
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called \n";
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called\n";
	return this->fixedPointNum;
}

int	Fixed::toInt(void) const
{
	return fixedPointNum >> fraction_bits;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(fixedPointNum) / (1 << fraction_bits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called\n";
	this->fixedPointNum = raw;
}


std::ostream &operator<<(std::ostream &out, const Fixed &object)
{
	out << object.toFloat();
	return out;
}
