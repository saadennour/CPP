#include "Point.hpp"

Point::Point():x(0), y(0)
{
    std::cout << "Point Default constructor called\n";
}

Point::Point(const Point& copy):x(copy.x), y(copy.y)
{
    std::cout << "Point Copy constructor called\n";
}

Point::Point(const float i, const float j):x(i), y(j)
{
    std::cout << "Point Constructor called\n";
}

Point::~Point()
{
    std::cout << "Point Destructor called\n";
}

Point&  Point::operator=(const Point& copy)
{
    (Fixed)this->x = copy.x;
    (Fixed)this->y = copy.y;
    return (*this);
}

Fixed   Point::getXpoint()
{
    return (this->x);
}

Fixed   Point::getYpoint()
{
    return (this->y);
}
