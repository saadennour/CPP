/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:40:01 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 00:24:33 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Cat	meow, linda;
    Animal **meta = new Animal*[20];
	// Dog wolf, berg;

	// meow = linda;
	// wolf = berg;
	// linda.setThought("mcha");
	// berg.setThought("polo");
	// meow.setThought("elsa");
	// wolf.setThought("food", 0);
	// wolf.setThought("sleep", 1);
	// wolf.setThought("go for walk", 2);

	// berg.setThought("roll", 0);
	// berg.setThought("chase", 1);
	// berg.setThought("sniff", 2);

    for(int i = 0; i < 10; i++)
        meta[i] = new Dog();
	for (int i = 10 ; i < 20; i++)
		meta[i] = new Cat();
	for (int i = 0; i < 20; i++)
		std::cout << meta[i]->getType() << std::endl;
	for (int i = 0; i < 20; i++)
		delete meta[i];
    return 0;
}