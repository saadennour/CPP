#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    std::string name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;
public:
    FragTrap();
    FragTrap(std::string call);
    FragTrap(const FragTrap& copy);

    FragTrap&   operator=(const FragTrap& copy);

    void    attack(const std::string& name);
    void    HighFivesGuys(void);

    ~FragTrap();
};


#endif