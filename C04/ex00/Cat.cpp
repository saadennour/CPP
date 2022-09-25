#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default constructor of Cat is called\n";
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Copy constructor of Cat is called\n";
    *this = copy;
}

Cat&    Cat::operator=(const Cat& copy)
{
    this->type = copy.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat is called\n";
}

void    Cat::makeSound() const
{
    std::cout << "meow....meow....meow\n";
}

// std::string Cat::getType()
// {
//     return (this->type);
// }