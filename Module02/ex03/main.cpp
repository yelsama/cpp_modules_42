#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(-6, 0), b(6, 0), c(0, 4), point(1, 1);

	if (bsp(a, b, c, point))
		std::cout<<"Point is within the triangle\n";
	else
		std::cout<<"Point is NOT within the triangle\n";

	return 0;
}