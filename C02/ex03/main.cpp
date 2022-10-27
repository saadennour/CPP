/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:38:01 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/26 18:41:29 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main()
{
    Point   one;
    Point   two(10, 20);
    Point   three(-10, 20);
    Point   p(0, 10);
	bool	result;

	result = one.bsp(one, two, three, p);
	(result == 1) ?	std::cout << "True\n" : std::cout << "False\n";
    return (0);
}