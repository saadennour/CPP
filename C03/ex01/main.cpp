/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:43:42 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/29 21:07:09 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap    vis;
    ScavTrap    warrior;
    ScavTrap    ana("saad");
	ScavTrap	maiden(warrior);

    vis = ana;
	vis.takeDamage(1);
	warrior.takeDamage(1);
	maiden.takeDamage(1);
	maiden.takeDamage(100);
    for (int i = 0; i <= 50; i++)
        vis.attack("aemon");
    vis.guardGate();
    return (0);
}