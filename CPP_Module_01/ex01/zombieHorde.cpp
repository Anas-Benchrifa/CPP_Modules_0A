/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:11:43 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/17 23:01:47 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"
#include <iostream>


ZombieHorde::ZombieHorde(int Size, std::string name)
{	
	try {
		this->zombies = new Zombie[Size];
		for (int x = 0; x < Size; x++)
			this->zombies[x].SetName(name);
		this->size = Size;
	} catch (const std::bad_alloc& e) {
		std::cout << "Error: Failed to Allocate." << std::endl;
	}
}

ZombieHorde::~ZombieHorde() {
	delete[] this->zombies;
}

void	ZombieHorde::announce() {
	for (int x = 0; x < this->size; x++)
		this->zombies[x].Announce();
}