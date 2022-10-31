/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 14:48:32 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
    	const Animal* meta = new Animal();
    	const Animal* berger = new Dog();
    	const Animal* meow = new Cat();
    	std::cout << berger->getType() << " " << std::endl;
    	std::cout << meow->getType() << " " << std::endl;
    	meow->makeSound(); //will output the cat sound!
    	berger->makeSound();
    	meta->makeSound();
		delete meta;
		delete berger;
		delete meow;
	}
	std::cout << "\n\n";
	{
		const WrongAnimal* meta = new WrongAnimal();
    	const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << "\n";
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		return (0); 
	}
}