#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Hit_points = 100;
    Attack_damage = 30;
    std::cout << "Default constructor of FragTrap is called\n";
}

FragTrap::FragTrap(std::string call)
{
    name = call;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "Parameterized constructor of FragTrap is called\n";
}

FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap is called\n";
}

FragTrap&   FragTrap::operator=(const FragTrap& copy)
{
    this->name = copy.name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    return (*this);
}

void    FragTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0 && this->Energy_points <= 0)
    {
        std::cout << this->name << " has no Hit points left.\n";
        return ;
    }
    else if (this->Energy_points <= 0)
    {
        std::cout << "FragTrap " << this->name << " has no energy point to attack.\n";
        return ;
    }
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage.\n";
    this->Energy_points -= 1;
}

void    FragTrap::HighFivesGuys(void)
{
    std::cout << "FragTrap asks for a HighFive\n";
}