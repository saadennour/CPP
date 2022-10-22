#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(const float i, const float j);
    Point(const Point& copy);

    Point&  operator=(const Point& copy);

    bool    bsp(Point const a, Point const b, Point const c, Point const point);
	float	Area(Point a, Point b, Point c);
    Fixed   getXpoint();
    Fixed   getYpoint();
    ~Point();
};


#endif