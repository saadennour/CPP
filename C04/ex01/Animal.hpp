/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:30 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/06 22:39:31 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string name);
    Animal(const Animal& copy);

    Animal& operator=(const Animal& copy);

    virtual void    makeSound() const;
    std::string getType() const;
    virtual ~Animal();
};

#endif