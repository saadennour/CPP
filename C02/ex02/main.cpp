/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:46:42 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/25 13:17:25 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const c;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	c++;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::const_max(a, b) << std::endl;
	std::cout << Fixed::const_min(a, b) << std::endl;
	if (b == c)
		std::cout << "\n\n" << a+b << "\n";
	else
		std::cout << "NO need\n";
	return 0;
}