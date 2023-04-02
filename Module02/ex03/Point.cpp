#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{}

Point::Point(const float x, const float y): _x(x), _y(y)
{}

Point::Point(const Point &other)
{
	this->_x = other._x;
	this->_y = other._y;
}

Point	&Point::operator=(const Point &other)
{
	if (this != &other)
	{
		this->_x = other._x;
		this->_y = other._y;
	}
	return *this;
}

Point::~Point(){};

float	Point::get_xf(void) const
{
	return (_x.toFloat());
}

float	Point::get_yf(void) const
{
	return (_y.toFloat());
}
