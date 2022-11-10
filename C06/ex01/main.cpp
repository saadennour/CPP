/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:40:44 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/10 07:45:12 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data    *ptr;
    Data    t(5);
    uintptr_t   p;

    std::cout << t.data << "\n";
    p = serialize(&t);
    std::cout << p << "\n";
    ptr = deserialize(p);
    std::cout << *ptr << "\n";
}
