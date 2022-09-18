/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:50:13 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/18 13:47:06 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::toInt(void) const
{
	return ((this->nvalue >> 8));
}

float	Fixed::toFloat(void) const
{
	float	result;

	return (result = this->nvalue / (2^this->nfbits));
}

void	Fixed::setRawBits(int const raw)
{
	this->nvalue = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->nvalue;
}