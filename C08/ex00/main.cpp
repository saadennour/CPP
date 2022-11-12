/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:48:07 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/12 13:25:13 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> container(6);

	for (size_t i = 0; i < 6; i++)
		container.push_back(i);
	try
	{
		std::vector<int>::iterator it = easyFind(container, 1);
		std::cout << *it << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}