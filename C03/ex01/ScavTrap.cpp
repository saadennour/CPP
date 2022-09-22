#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string call)
{
    name = call;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called\n";
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy)
{
    this->name = copy.name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now on Gate keeper mode\n";
}