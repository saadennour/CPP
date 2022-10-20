/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:27:39 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/20 07:31:38 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain(std::string level)
{
	switch (level[0])
	{
		case 'D':
			Harl::debug();
			Harl::info();
			Harl::warning();
			Harl::error();
			break;
		case 'I' :
			Harl::info();
			Harl::warning();
			Harl::error();
			break ;
		case 'W' :
			Harl::warning();
			Harl::error();
			break ;
		case 'E' :
			Harl::error();
			break ; 
		default:
			std::cout << "There is no complain like that !" << "\n";
			break;
	}
	exit (0);
}