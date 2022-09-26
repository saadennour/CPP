#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal meta[20];

    for(int i = 0; i < 10; i++)
        meta[i] = new Dog();
    return 0;
}