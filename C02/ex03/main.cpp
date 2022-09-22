#include "Point.hpp"

int main()
{
    Point   one;
    Point   two(10, 30);
    Point   three(20, 0);
    Point   p(30, 15);

    std::cout << one.bsp(one, two, three, p) << std::endl;
    return (0);
}