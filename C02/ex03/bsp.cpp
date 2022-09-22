#include "Point.hpp"

bool    Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed max_x;
    Fixed max_y;

    max_x = Fixed::const_max(a.x, b.x);
    max_x = Fixed::const_max(max_x, c.x);
    max_y = Fixed::const_max(a.y, b.y);
    max_y = Fixed::const_max(max_y, c.y);

    if ((Fixed)Fixed::const_max(max_x, point.x) == point.x)
        return (0);
    if ((Fixed)Fixed::const_max(max_y, point.y) == point.y)
        return (0);
    return (1);
}