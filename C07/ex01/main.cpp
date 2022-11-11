/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:26:32 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/11 11:52:28 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	double	tab[] = {0.5, 1.23, 7.432, 0.334, 401.1};
	int		tab2[] = {23, 545, 0, 10, 243, 543, 5436, 54};

	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab2, 8, print);

	return (0);
}