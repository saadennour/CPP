/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:38:58 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 14:40:53 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
	Dog(std::string name);
    Dog(const Dog& copy);

    Dog& operator=(const Dog& copy);

    virtual void    makeSound() const;
    ~Dog();
};

#endif