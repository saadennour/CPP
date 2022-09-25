#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Default constructor of Animal is called\n";
}

Animal::Animal(std::string name)
{
    type = name;
    std::cout << "Parameterized constructor of Animal is called\n";
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
    std::cout << "Copy constructor of Animal is called\n";
}

Animal& Animal::operator=(const Animal& copy)
{
    this->type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal is called\n";
}

void    Animal::makeSound() const
{
    std::cout << "Some animal shouts\n";
}

std::string Animal::getType() const
{
    return (this->type);
}