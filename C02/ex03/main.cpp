#include "Point.hpp"

int main()
{
    Point   one;
    Point   two(20, 0);
    Point   three(10, 30);
    Point   p(10, 15);

    std::cout << one.bsp(one, two, three, p) << std::endl;
    return (0);
}