/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:41:27 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/21 00:59:56 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Default constructor of Weapon has been called\n";
}

Weapon::Weapon(std::string weapon)
{
	type = weapon;
	std::cout << "Parameterized constructor of Weapon has been called\n";
}

void	Weapon::setType(std::string weapon)
{
	type = weapon;
}

const std::string&	Weapon::getType()
{
	return (type);
}

Weapon::~Weapon()
{
	std::cout << "Destructor of Weapon has been called\n";
}