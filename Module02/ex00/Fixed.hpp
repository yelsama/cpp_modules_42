#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	fixed_p_value;
	static const int n_fraction_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator= (const Fixed &other);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif