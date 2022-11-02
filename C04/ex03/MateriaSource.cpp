/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:12:53 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/02 02:11:33 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->Materias[i] = nullptr;
    std::cout << "Default constructor of MateriaSource is called\n";
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		this->Materias[i] = nullptr;
	*this = copy;
	std::cout << "Copy constructor of MateriaSource is called\n";
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		this->Materias[i] = copy.Materias[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i])
			delete Materias[i];
	}
    std::cout << "Destructor of MateriaSource is called\n";
}

void	MateriaSource::learnMateria(AMateria *source)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i] == nullptr && source != nullptr)
		{
			delete this->Materias[i];
			this->Materias[i] = source->clone();
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i] != nullptr && type == this->Materias[i]->getType())
			return (this->Materias[i]);
	}
	return (nullptr);
}