/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:31:06 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/18 03:57:10 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string value)
{
	name = value;
}

Zombie::~Zombie()
{
	std::cout << name << " object has been destroyed" << std::endl;
}

std::string	Zombie::getter(void)
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << this->getter();
	std::cout << ": BraiiiiiiinnnzzzZ..." << "\n";
}