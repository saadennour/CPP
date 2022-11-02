/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:02:12 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/02 01:35:21 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
#define	CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private :
	AMateria	*Materias[4];
	std::string name;
public:
	Character();
	Character(std::string _name);
	Character(const Character &copy);
	
	Character	&operator=(const Character &copy);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	~Character();
};


#endif