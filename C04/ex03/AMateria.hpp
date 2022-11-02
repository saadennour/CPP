/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:33:59 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/01 22:46:52 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"


class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria &copy);

	AMateria	&operator=(const AMateria &copy);

	std::string	const &getType()const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual	~AMateria();
};


#endif