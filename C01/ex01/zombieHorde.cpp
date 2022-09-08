/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:57:21 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 16:04:30 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		i;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		horde[i] = Zombie(name);
		i++;
	}
	return (horde);
}