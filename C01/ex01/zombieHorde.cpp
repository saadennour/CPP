/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:57:21 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/23 09:26:47 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0 || name.empty())
	{
		std::cout << "Number of zombies in horde should be at least one or you forgot to name them !!\n";
		exit (0);
	}
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);
	return (horde);
}