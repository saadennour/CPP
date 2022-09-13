/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:37:21 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/12 22:54:54 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string call){
		name = call;
	};
	std::string getName(){
		return (name);
	}
	std::string	getWeapon(){
		return (weapon->getType());
	}
	void	setWeapon(Weapon *arm){
		weapon = arm;
	}
	void	attack();
	~HumanB(){};
};

#endif