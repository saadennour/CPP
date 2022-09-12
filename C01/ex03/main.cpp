/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:50:23 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/12 01:26:32 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(HumanA *bob)
{
	std::cout << bob->getName() << " attacks with their " << bob->getWeapon() << std::endl;
}

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", &club);
	bob.attack(&bob);
	club.setType("some other type of club");
	bob.attack(&bob);
}