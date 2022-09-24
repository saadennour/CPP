#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string call)
{
    name = call;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 5;
    std::cout << "Parameterized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
    std::cout << "Copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& copy)
{
    this->name = copy.name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    std::cout << "Copy assignment operator called\n";
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0 && this->Energy_points <= 0)
    {
        std::cout << this->name << " has no Hit points left.\n";
        return ;
    }
    else if (this->Energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy point to attack.\n";
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage.\n";
    this->Energy_points -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points -= amount;
    std::cout << "ClapTrap " << this->name << " received " << this->Hit_points << " points of damage.\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy point to restore his health.\n";
        return ;
    }
    this->Hit_points += amount;
    this->Energy_points -= 1;
}