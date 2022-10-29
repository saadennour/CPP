/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:59:37 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/29 18:22:28 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
    std::cout << "Default constructor of ScavTrap called\n";
}

ScavTrap::ScavTrap(std::string call):ClapTrap(call)
{
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
    std::cout << "Parameterized constructor of ScavTrap called\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
    std::cout << "ScavTrap Copy constructor of ScavTrap called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called\n";
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy)
{
    this->name = copy.name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
	std::cout << "ScavTrap assignement operator has been called\n";
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0)
        std::cout << "ScavTrap " << this->name << " has no Hit points left.\n";
    else if (this->Energy_points <= 0)
        std::cout << "ScavTrap " << this->name << " has no energy point to attack.\n";
    else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage.\n";
    	this->Energy_points -= 1;
	}
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now on Gate keeper mode\n";
}
