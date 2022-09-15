/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 03:43:59 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/15 05:59:06 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	switch (level)
	{
	case "DEBUG":
		std::cout << "DEBUG" << "\n";
		break;
	
	default:
		break;
	}
}