/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 17:54:05 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *thoughts;
public:
    Cat();
	Cat(std::string name);
    Cat(const Cat& copy);

    Cat& operator=(const Cat& copy);

	void	setThought(std::string Thought, int N);
	std::string	getThought(int N);
    void    makeSound() const;
    ~Cat();
};

#endif