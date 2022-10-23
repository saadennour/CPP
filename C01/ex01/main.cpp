/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:08:03 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/23 09:26:38 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*horde = zombieHorde(0, "Lucil");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}