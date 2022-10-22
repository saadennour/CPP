#include "Point.hpp"

float	Point::Area(Point a, Point b, Point c)
{
	Fixed	Area;

	Area = (a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y))/2;
	if (Area.toFloat() < 0)
		return (Area.toFloat() * -1);
	return (Area.toFloat());
}

bool    Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	abc, pab, pac, pbc;

	abc = roundf(Area(a, b, c));
	pab = roundf(Area(point, a, b));
	pac = roundf(Area(point, a, c));
	pbc = roundf(Area(point, b, c));

    if (abc == pab + pac + pbc && abc != 0)
        return (1);
    else
        return (0);
}