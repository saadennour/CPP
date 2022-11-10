/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 04:02:28 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/10 11:34:21 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &x, T &y)
{
	T swap;

	swap = x;
	x = y;
	y = swap;	
}

template <typename T>
T	max(T x, T y)
{
	return (x > y) ? x : y;
}

template <typename T>
T	min(T x, T y)
{
	return (x < y) ? x : y;
}


#endif