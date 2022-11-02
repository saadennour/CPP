/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:30 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/01 22:37:15 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef	ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class	AMateria;
class	ICharacter
{
public:
	virtual ~ICharacter() {};
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif