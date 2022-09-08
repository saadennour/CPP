/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:53 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 15:07:25 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string value)
	{
		name = value;
	}
	void	announce(void)
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	~Zombie(){
		std::cout << name << " object has been destroyed" << std::endl;
	}
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif