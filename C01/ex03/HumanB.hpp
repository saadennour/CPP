/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:37:21 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/11 01:03:38 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	static std::string	name;
public:
	HumanB(std::string call){
		name = call;
	};
	static std::string getName(){
		return (name);
	}
	void	attack();
	~HumanB(){};
};

#endif