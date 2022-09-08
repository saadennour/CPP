/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:20 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 16:43:01 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	zombie("foo");
	Zombie	*infected;

	std::cout << zombie.getter();
	zombie.announce();
	infected = newZombie("poo");
	std::cout << infected->getter();
	infected->announce();
	randomChump("Chump");
	delete infected;
	return (0);
}