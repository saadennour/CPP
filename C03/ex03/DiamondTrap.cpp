/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:08:35 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/10 11:14:04 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 30;
    std::cout << "Default constructor of DiamondTrap called\n";
}

DiamondTrap::DiamondTrap(std::string call)
{
    name = call;
	std::cout << "Parameterized constructor of DiamondTrap called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    *this = copy;
	std::cout << "Copy constructor of DiamondTrap called\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor of DiamondTrap called\n";
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
    std::cout << this->name << " " << "\n";
}