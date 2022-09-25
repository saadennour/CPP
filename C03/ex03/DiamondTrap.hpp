#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string call);
    DiamondTrap(const DiamondTrap& copy);

    DiamondTrap&    operator=(const DiamondTrap& copy);

    void    attack(const std::string& target);
    void    whoAmI();

    ~DiamondTrap();
};


#endif