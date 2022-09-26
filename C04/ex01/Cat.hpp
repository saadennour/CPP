#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *thoughts;
public:
    Cat();
    Cat(const Cat& copy);

    Cat& operator=(const Cat& copy);

    void    makeSound() const;
    // std::string getType();
    ~Cat();
};

#endif