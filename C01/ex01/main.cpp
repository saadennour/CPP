/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:08:03 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 17:02:16 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*horde;
	int		i;

	i = 0;
	horde = zombieHorde(5, "lucil");
	while (i < 5)
	{
		std::cout << horde[i].getter();
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}