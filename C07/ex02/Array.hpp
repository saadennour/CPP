/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:36:57 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/11 11:53:03 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    unsigned int lenght;
    T   *array;
public:
    Array():lenght(1){array = new T[1];};
    Array(unsigned int n):lenght(n){array = new T[n];};
    Array(const Array& copy)
    {
        array = new T[1];
        *this = copy;
    };

    Array&  operator=(const Array& copy){
        this->lenght = copy.lenght;
        delete [] this->array;
        this->array = new T[copy.size()];
        for (size_t i = 0; i < copy.size(); i++)
            this->array[i] = copy.array[i];
        return (*this);
    };
    T&  operator[](int index) const
    {
        if (index < 0 || index >= static_cast<int>(this->lenght))
            throw std::exception();
        return (this->array[index]);
    };

    size_t  size() const
    {
        return (lenght);
    };

    ~Array()
    {
        delete [] array;
    };
};

#endif