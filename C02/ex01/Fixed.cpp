/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:50:13 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/22 09:42:35 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	nvalue = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int data)
{
	nvalue = (data << nfbits);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float data)
{
	nvalue = roundf(data * (1 << nfbits));
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::toInt(void) const
{
	return ((this->nvalue >> (this->nfbits)));
}

float	Fixed::toFloat(void) const
{
	float	result = this->nvalue;

	result /= (1 << this->nfbits);
	return (result);
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

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called\n";
	this->nvalue = copy.nvalue;
	return *this;
}

std::ostream& operator<< (std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return out;
}