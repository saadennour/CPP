/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:48:07 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/14 01:13:38 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> container(6);
	int	value = 1;

	for (std::vector<int>::iterator i = container.begin(); i < container.end(); i++)
	{
		*i = value;
		value++;
	}
	try
	{
		std::vector<int>::iterator it = easyFind(container, 0);
		std::cout << "the occurence of " << *it << " exists\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> list(6);

	for (std::list<int>::iterator i = list.begin(); i != list.end(); i++)
	{
		*i = value;
		value++;
	}
	try
	{
		std::list<int>::iterator it = easyFind(list, 7);
		std::cout << "the occurence of " << *it << " exists\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	
	return (0);
}