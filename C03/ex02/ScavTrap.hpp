#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    std::string name;
    int         Hit_points;
    int         Energy_points;
    int         Attack_damage;
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