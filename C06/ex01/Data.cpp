/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:40:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/10 01:46:07 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
    return p;
}

Data::Data(int _data)
{
    data = _data;
}

Data* deserialize(uintptr_t raw)
{
    Data *p = reinterpret_cast<Data*>(raw);
    return (p);
}

std::ostream&   operator<<(std::ostream& out, const Data& ptr)
{
    out << ptr.data;
    return (out);
}