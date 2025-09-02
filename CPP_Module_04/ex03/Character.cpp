/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:00:00 by aben-chr          #+#    #+#             */
/*   Updated: 2025/09/02 16:12:24 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(const std::string& name) : name(name), size(0) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character& other) {
	*this = other;
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		this->name = other.getName();
		this->size = 0;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = NULL;
			if (other.inventory[i])
			{
				this->inventory[i] = other.inventory[i]->clone();
				this->size++;
			}
		}
	}
	return (*this);
}

const std::string&	Character::getName(void) const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	if (!m)
		return;
	
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			this->size++;
			std::cout << name << " equipped " << m->getType() << " in slot " << i << std::endl;
			return;
		}
	}
	std::cout << "Couldn't equip " << m->getType() << ", no more space" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
	{
		std::cout << name << " unequipped " << this->inventory[idx]->getType() << " from slot " << idx << std::endl;
		this->inventory[idx] = NULL;
		this->size--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Nothing to use at slot " << idx << std::endl;
}
