/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:08:03 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/21 00:09:42 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*horde = zombieHorde(5, "lucil");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}