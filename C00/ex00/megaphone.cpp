/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/14 04:12:07 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; av[i]; i++)
        {
			for (int j = 0; av[i][j]; j++)
			{ 
				if (islower(av[i][j]))
					av[i][j] = toupper(av[i][j]);
            	std::cout << av[i][j];
			}
        }
    }
    std::cout << "\n";
}