/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:26:37 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/11 11:07:34 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define	ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* x, size_t len, void (&func)(T const&))
{
	for (size_t i = 0; i < len; i++)
		func(x[i]);	
}

template <typename T>
void	print(T const &x)
{
	std::cout << x << std::endl;
}

#endif