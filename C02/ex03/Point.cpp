#include "Point.hpp"

Point::Point():x(0), y(0)
{
    std::cout << "Default constructor called\n";
}

Point::Point(const Point& copy):x(copy.x), y(copy.y)
{
    std::cout << "Copy constructor called\n";
}

Point::Point(const float i, const float j):x(i), y(j)
{
    std::cout << "Constructor called\n";
}

// Point::Point(const Fixed a, const Fixed b):x(a), y(b)
// {
//     std::cout << "Constructor depending on Fixed class\n";
// }

Point::~Point()
{
    std::cout << "Destructor called\n";
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
