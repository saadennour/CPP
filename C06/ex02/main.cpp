#include "Classes.hpp"

int main()
{
    Base    *ptr = generate();

    identify(ptr);
    identify(*ptr);
    return (0);
}