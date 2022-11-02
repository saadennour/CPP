/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/01 22:11:17 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
#define	ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(std::string name);
	Ice(const Ice &copy);

	Ice	&operator=(const Ice &copy);

	AMateria* clone() const;
	void use(ICharacter& target);
	~Ice();
};

#endif