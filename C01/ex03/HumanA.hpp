/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:51:20 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/12 01:26:27 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanA(std::string call, Weapon *arm){
		name = call;
		weapon = arm ;
	};
	std::string	getName();
	std::string	getWeapon();
	void	attack(HumanA *bob);
	~HumanA(){};
};

std::string HumanA::getWeapon(){
	return (weapon->getType());
};

std::string	HumanA::getName(){
	return (name);
};

#endif