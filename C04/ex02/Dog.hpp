#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *thoughts;
public:
    Dog();
    Dog(const Dog& copy);

    Dog& operator=(const Dog& copy);

    void    makeSound() const;
    // std::string getType();
    ~Dog();
};

#endif