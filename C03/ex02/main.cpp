/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:59:44 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/29 21:14:58 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap    vis;
    FragTrap    ana("saad");
    FragTrap    prod("foo");

    vis = ana;
    for (int i = 0; i <= 100; i++)
        vis.attack("aemon");
	for (int i = 0; i < 20; i++)
		prod.takeDamage(20);
	prod.beRepaired(20);
    vis.HighFivesGuys();
    return (0);
}