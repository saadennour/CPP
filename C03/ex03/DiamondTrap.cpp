#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor is called\n";
}

DiamondTrap::DiamondTrap(std::string call)
{
    name = call;
    ClapTrap::name = call + "_clap_name";
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    *this = copy;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor of DiamondTrap is called\n";
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& copy)
{
    this->name =copy.name;
    this->ClapTrap::name = copy.ClapTrap::name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    return (*this);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << this->name << " " << ClapTrap::name << "\n";
}