/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:45:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/23 09:51:23 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string call, Weapon &arm):weapon(arm)
{
	name = call;
	std::cout << "Parameterized constructor of HumanA has been called\n";
}

std::string	HumanA::getName()
{
	return (name);
}

std::string HumanA::getWeapon()
{
	return (weapon.getType());
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor of HumanA has been called\n";
}