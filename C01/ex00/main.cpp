/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:20 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/24 10:15:12 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	zombie("foo");
	Zombie	*infected;

	zombie.announce();
	infected = newZombie("poo");
	infected->announce();
	randomChump("Chump");
	delete infected;
	return (0);
}