#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string call);
    ScavTrap(const ScavTrap& copy);

    ScavTrap&   operator=(const ScavTrap& copy);

    void    attack(const std::string& target);
    void    guardGate();
    ~ScavTrap();
};

#endif