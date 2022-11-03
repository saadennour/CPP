/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:56 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/03 01:23:00 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *thoughts;
public:
    Dog();
	Dog(std::string name);
    Dog(const Dog& copy);

    Dog& operator=(const Dog& copy);

	void	setThought(std::string Thought, int N);
	std::string	getThought(int N);
    void    makeSound() const;
    ~Dog();
};

#endif