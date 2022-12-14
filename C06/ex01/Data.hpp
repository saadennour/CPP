/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:40:52 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/10 01:44:50 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

typedef struct Data
{
    int data;
    Data(int _data);
}   Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

std::ostream&   operator<<(std::ostream& out, const Data& ptr);

#endif