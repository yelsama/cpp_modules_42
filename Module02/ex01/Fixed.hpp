#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	fixedPointNum;
	static const int	fraction_bits = 8;

public:
	Fixed(void);
	Fixed(const int int_value);
	Fixed(const float float_value);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed(void);
	int	getRawBits(void) const;
	int	toInt(void) const;
	float	toFloat(void) const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &object);

#endif