/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:59:29 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/26 21:33:28 by sfarhan          ###   ########.fr       */
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
	Fixed& operator=(const Fixed &copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed();
};

std::ostream& operator<< (std::ostream &out, const Fixed &copy);

#endif