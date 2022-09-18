/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:59:29 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/18 13:53:00 by sfarhan          ###   ########.fr       */
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
	Fixed(){
		nvalue = 0;
		std::cout << "Default constructor called\n";
	};
	Fixed(const int data){
		nvalue = (data << nfbits);
		std::cout << "Int constructor called with " << nvalue << "\n";
	};
	Fixed(const float data){
		nvalue = data * (2^nfbits);
		std::cout << "Float constructor called\n";
	};
	Fixed(const Fixed &a)
	{
		std::cout << "Copy constructor called\n";
		*this = a;
	};
	Fixed& operator=(const Fixed &copy){
		std::cout << "Copy assignment operator called\n";
		this->nvalue = copy.nvalue;
		return *this;
	}
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed(){
		std::cout << "Destructor called\n";
	};
};

#endif