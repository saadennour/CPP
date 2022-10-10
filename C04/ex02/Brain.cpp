#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor of Brain is called\n";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Copy constructor of Brain is called\n";
    *this = copy;
}

// Brain&  Brain::operator=(const Brain& copy)
// {
//     this->ideas = copy.ideas;
//     return (*this);
// }

Brain::~Brain()
{
    std::cout << "Destructor of Brain is called\n";
}