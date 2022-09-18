/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:50:13 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/18 15:25:36 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::toInt(void) const
{
	if (this->nvalue > 1)
		return ((this->nvalue >> this->nfbits));
	else
		return (Fixed::toFloat());
}

float	Fixed::toFloat(void) const
{
	float	result;

	return (result = this->fvalue / (2^this->nfbits));
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

std::ostream& operator<< (std::ostream &out, const Fixed &copy){
	out << copy.toFloat();
	out << copy.toInt();
	return out;
}