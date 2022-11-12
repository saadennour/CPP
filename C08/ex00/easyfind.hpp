/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:48:11 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/12 13:25:22 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator	easyFind(T& container, int x)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), x);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif