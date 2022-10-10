#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal **meta = new Animal*[20]();

    for(int i = 0; i < 10; i++)
        meta[i] = new Dog();
    for(int i = 10; i < 20; i++)
        meta[i] = new Cat();
    meta[0]->makeSound();
    meta[10]->makeSound();
    for (int i = 0; i < 20; i++)
        delete meta[i];
    // system("leaks Brain");
    return 0;
}