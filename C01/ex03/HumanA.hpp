/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:51:20 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/11 01:59:02 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	static std::string	name;
	static std::string	weapon;
public:
	HumanA(std::string call, Weapon arm){
		name = call;
		weapon = arm.getType() ;
	};
	static std::string	getName(){
		return (name);
	};
	static std::string getWeapon(){
		return (weapon);
	};
	void	attack();
	~HumanA(){};
};


#endif