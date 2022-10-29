/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:29:21 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/29 21:04:50 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    aemon("aemon");
    ClapTrap    vis(aemon);
    ClapTrap    ana("aegon");
	ClapTrap	warrior;

    warrior = vis = ana;
	std::cout << std::endl;
	warrior.beRepaired(20);
    for(int i = 0; i <= 10; i++)
	{
        vis.attack("aemon");
		std::cout << "\n";
		aemon.takeDamage(1);
		std::cout << "\n";
	}
	vis.beRepaired(10);
    return (0);
}