/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:51:34 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/23 11:23:52 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "Default constructor of HumanB has been called\n";
}

HumanB::HumanB(std::string call)
{
	name = call;
	weapon = nullptr;
	std::cout << "Parameterized constructor of HumanB has been called\n";	
}

std::string	HumanB::getName()
{
	return (name);
}

std::string	HumanB::getWeapon()
{
	if (weapon == nullptr)
	{
		std::cout << "\n\nUse of uninitialized pointer !!\n";
		exit (0);
	}
	return (weapon->getType());
}

void	HumanB::setWeapon(Weapon *arm)
{
	weapon = arm;
}

void	HumanB::attack()
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor of HumanB has been called\n";
}