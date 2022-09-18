/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:56:45 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/18 06:24:05 by sfarhan          ###   ########.fr       */
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
	Fixed(){
		nvalue = 0;
		std::cout << "Default constructor called\n";
	};
	Fixed(const Fixed &a)
	{
		nvalue = a.nvalue;
		std::cout << "Copy assignment operator called\n";
	};
	Fixed& operator=(const Fixed &copy){
		std::cout << "Copy assignment called\n";
		this->nvalue = copy.nvalue;
		return *this;
	}
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	~Fixed(){
		std::cout << "Destructor called\n";
	};
};

#endif