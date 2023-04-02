#include "Point.hpp"

static float area (const Point p1, const Point p2, const Point p3)
{
	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
	//shoelace formul
	float area =	(
			(p1.get_xf() * (p2.get_yf() - p3.get_yf()))
			+ ( p2.get_xf() * (p3.get_yf() - p1.get_yf()))
			+ ( p3.get_xf() * ( p1.get_yf() - p2.get_yf()))
			)
			/ 2;

	if (area >= 0)
		return (area);
	else
		return (area * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float main_triangle, sub_t1, stub_t2, sub_t3;

	main_triangle = area(a, b, c);
	sub_t1 = area(point, a, b);
	stub_t2 = area(point, b, c);
	sub_t3 = area(point, a, c);

	if ( sub_t1 == 0 || stub_t2 == 0 || sub_t3 == 0)
		return false;
	if ( sub_t1 + stub_t2 + sub_t3 == main_triangle )
		return true;
	return false;
}
