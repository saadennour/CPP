/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:04:35 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/21 00:06:43 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default constructor has been called\n";
}

Zombie::Zombie(std::string value)
{
	name = value;
	std::cout << name << " Parameterized constructor has been called\n";
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << getter() << ": BraiiiiiiinnnzzzZ..." << "\n";
}

std::string	Zombie::getter()
{
	return (name);
}
