/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:00:00 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/31 15:58:26 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) : size(0)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	this->size = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		this->materias[i] = NULL;
		if (other.materias[i])
		{
			this->materias[i] = other.materias[i]->clone();
			this->size++;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
		
	if (this->size >= 4)
	{
		std::cout << "Can't learn any more materias" << std::endl;
		delete m;
	}
	else
	{
		this->materias[size] = m;
		size++;
		std::cout << "Learned " << m->getType() << " materia" << std::endl;
	}
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4 && this->materias[i]; i++)
	{
		if (type == this->materias[i]->getType())
			return this->materias[i]->clone();
	}
	std::cout << "Unknown materia type: " << type << std::endl;
	return NULL;
}
