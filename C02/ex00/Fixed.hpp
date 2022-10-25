/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:56:45 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/25 15:59:01 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class	Fixed
{
private :
	int	nvalue;
	static const int nfbits = 8;
public :
	Fixed();
	Fixed(const Fixed &a);
	Fixed& operator=(const Fixed &copy);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	~Fixed();
};

#endif