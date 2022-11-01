#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>

class MateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);

    MateriaSource &operator=(const MateriaSource &copy);

    void    learnMateria(AMateria*);
    AMateria    *createMateria(std::string const &type);

    ~MateriaSource();
};



#endif