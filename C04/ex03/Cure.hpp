/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:23 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/01 22:11:11 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
#define	CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string name);
	Cure(const Cure &copy);

	Cure	&operator=(const Cure& copy);

	AMateria* clone() const;
	void use(ICharacter& target);
	~Cure();
};




#endif