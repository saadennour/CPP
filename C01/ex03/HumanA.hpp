/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:51:20 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/10 00:55:27 by sfarhan          ###   ########.fr       */
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
	Weapon		weapon();
public:
	HumanA(std::string call, Weapon arm){
		name = call;
		weapon = arm;
	};
	std::string	getName(){
		return (name);
	};
	std::string getWeapon(){
		return (weapon);
	};
	void	attack();
	~HumanA();
};


#endif