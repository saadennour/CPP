/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:33:37 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/02 02:21:38 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	// IMateriaSource* src2 = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("igfhdfge");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	// ICharacter*	sam = me;
	
	// src2->learnMateria(new Cure());
	// tmp2 = src2->createMateria("cure");
	// sam->equip(tmp2);
	
	// sam->use(0, *me);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	system("leaks Interface");
	return 0;
}