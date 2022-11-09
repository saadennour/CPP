#include "Data.hpp"

int main()
{
    Data    *ptr;
    Data    t(5);
    uintptr_t   p;

    std::cout << &t << "\n";
    p = serialize(&t);
    std::cout << p << "\n";
    ptr = deserialize(p);
    std::cout << ptr << "\n";
}
