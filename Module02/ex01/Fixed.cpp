#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixedPointNum = 0;
}

Fixed::Fixed(const int int_value)
{
	this->fixedPointNum = int_value << fraction_bits;
}

Fixed::Fixed(const float float_value)
{
	this->fixedPointNum = static_cast<int>(float_value * (1 << fraction_bits));
}

Fixed::Fixed(const Fixed &other)
{
	this->fixedPointNum = other.fixedPointNum;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->fixedPointNum = other.fixedPointNum;
	}
	return *this;
}

Fixed::~Fixed(void){}

int	Fixed::getRawBits(void) const
{
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
	this->fixedPointNum = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}