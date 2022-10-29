/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:08:43 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/29 21:21:32 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "unknown";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "Default constructor of ClapTrap called\n";
}

ClapTrap::ClapTrap(std::string call)
{
    name = call;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "Parameterized constructor of ClapTrap called\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
    std::cout << "Copy constructor of ClapTrap called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of ClapTrap called\n";
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
    if (this->Hit_points <= 0)
        std::cout << "ClapTrap " << this->name << " has no Hit points left.\n";
    else if (this->Energy_points <= 0)
        std::cout << "ClapTrap " << this->name << " has no energy point to attack.\n";
    else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage.\n";
    	this->Energy_points -= 1;
	}
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points -= amount;
	if (this->Hit_points >= 0)
    	std::cout << "ClapTrap " << this->name << " received " << amount << " points of damage, and with " << Hit_points << " Hit points left.\n";
	else
		std::cout << "ClapTrap " << this->name << " has no hit points left.\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points <= 0)
        std::cout << "ClapTrap " << this->name << " has no energy point to restore his health.\n";
    else
	{
		this->Hit_points += amount;
    	this->Energy_points -= 1;
		std::cout << "ClapTrap " << this->name << " got back " << amount << " Hit points back\n";
	}
}
