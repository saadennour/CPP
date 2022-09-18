/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:57:15 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/18 06:27:26 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	Fixed::setRawBits(int const raw)
{
	this->nvalue = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->nvalue;
}