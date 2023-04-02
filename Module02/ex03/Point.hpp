#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &other);
	Point	&operator=(const Point &other);
	~Point();

	float	get_xf(void) const;
	float	get_yf(void) const;
};

#endif