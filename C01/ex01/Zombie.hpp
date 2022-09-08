/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:15:57 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 16:59:57 by sfarhan          ###   ########.fr       */
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
	Zombie(){};
	Zombie(std::string value)
	{
		name = value;
	}

	std::string	getter()
	{
		return name;
	}

	void	announce(void);
	~Zombie(){
		std::cout << name << " has been destroyed" << std::endl;
	}
};

Zombie	*zombieHorde(int N, std::string name);

#endif