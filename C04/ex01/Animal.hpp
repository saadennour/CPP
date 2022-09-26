#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string name);
    Animal(const Animal& copy);

    Animal& operator=(const Animal& copy);

    virtual void    makeSound() const;
    std::string getType() const;
    ~Animal();
};

#endif