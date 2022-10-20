/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:20:24 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/20 07:28:15 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	customer;
	std::string acts[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	while (i < 4)
	{
		if (acts[i].compare(av[1]) == 0)
		{
			customer.complain(av[1]);
			return (0);
		}
		i++;
	}
	std::cout << "There is no complain like that !" << "\n";
	return (0);
}