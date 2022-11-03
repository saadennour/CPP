/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:03:39 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/03 02:53:19 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->Materias[i] = nullptr;
	std::cout << "Default constructor of Character is called\n";
}

Character::Character(std::string _name)
{
	name = _name;
	for (int i = 0; i < 4; i++)
		this->Materias[i] = nullptr;
	std::cout << "Parameterized constructor of Character is called\n";
}

Character::Character(const Character &copy)
{
	std::cout << "Copy constructor of Character is called\n";
	for (int i = 0; i < 4; i++)
		this->Materias[i] = nullptr;
	*this = copy;
}

Character&	Character::operator=(const Character &copy)
{
	this->name = copy.name;
	for (int i = 0; i < 4; i++)
	{
		if (Materias[i] != nullptr)
			delete Materias[i];
		if (copy.Materias[i] != nullptr)
			Materias[i] = copy.Materias[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i])
			delete Materias[i];
	}
	std::cout << "Destructor of Character " << this->getName() << " is called\n";
}

std::string	const& Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i] == nullptr && m != nullptr)
		{
			this->Materias[i] = m->clone();
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		std::cout << this->name << " has unequip his " << this->Materias[idx]->getType() << "\n"; 
	else
		std::cout << "There is no Materia in this slot\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && this->Materias[idx] != nullptr)
		this->Materias[idx]->use(target);
	else
		std::cout << "There is no Materia in this slot\n";
}