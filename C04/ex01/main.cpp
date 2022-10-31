/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:40:01 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 18:36:35 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal **meta = new Animal*[10];

    for(int i = 0; i < 5; i++)
        meta[i] = new Dog();
	for (int i = 5 ; i < 10; i++)
		meta[i] = new Cat();
	for (int i = 0; i < 10; i++)
		std::cout << meta[i]->getType() << std::endl;
	for (int i = 0; i < 10; i++)
		delete meta[i];
    return 0;
}