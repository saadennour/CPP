/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:38:01 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/25 17:13:44 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main()
{
    Point   one;
    Point   two(3, -3);
    Point   three(-3, -3);
    Point   p(2, -2);
	bool	result;

	result = one.bsp(one, two, three, p);
	(result == 1) ?	std::cout << "True\n" : std::cout << "False\n";
    return (0);
}