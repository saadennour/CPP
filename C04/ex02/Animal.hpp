/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:40:01 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 18:40:33 by sfarhan          ###   ########.fr       */
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

    virtual void    makeSound() const = 0;
    std::string getType() const;
	void	setType(std::string _type);
    virtual ~Animal();
};

#endif