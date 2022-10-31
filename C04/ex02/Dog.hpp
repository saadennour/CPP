/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:39 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 18:41:40 by sfarhan          ###   ########.fr       */
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