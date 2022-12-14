/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:46:34 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/26 23:34:51 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
private :
	int			nvalue;
	static const int	nfbits = 8;
public :
	Fixed();
	Fixed(const int data);
	Fixed(const float data);
	Fixed(const Fixed &a);

	Fixed&	operator=(const Fixed &copy);
	Fixed	operator+(const Fixed &copy);
	Fixed	operator-(const Fixed &copy);
	Fixed	operator*(const Fixed &copy);
	Fixed	operator/(const Fixed &copy);

	bool	operator>(const Fixed &copy);
	bool	operator<(const Fixed &copy);
	bool	operator>=(const Fixed &copy);
	bool	operator<=(const Fixed &copy);
	bool	operator==(const Fixed &copy);
	bool	operator!=(const Fixed &copy);

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&	min(Fixed& nb1, Fixed& nb2);
	static const Fixed&	const_min(const Fixed& nb1, const Fixed& nb2);
	static Fixed&	max(Fixed& nb1, Fixed& nb2);
	static const Fixed&	const_max(const Fixed& nb1, const Fixed& nb2);

	~Fixed();
};

std::ostream& operator<< (std::ostream &out, const Fixed &copy);

#endif