/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:11:43 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/12 01:38:39 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

std::string	ZombieHorde::RandomNames[9] = {
	"Anas",
	"Moead",
	"Ayoub",
	"hassan",
	"Ma9la",
	"Zero",
	"The-King",
	"Hassan-three",
	"Life"
};

ZombieHorde::ZombieHorde(int Size)
{
	srand((unsigned int)time(NULL));
	this->zombies = new Zombie[Size];
	for (int x = 0; x < Size; x++)
		this->zombies[x].SetName(this->RandomNames[rand() % 9]);
	this->size = Size;
}

ZombieHorde::~ZombieHorde() {
	delete[] this->zombies;
}

void	ZombieHorde::announce() {
	for (int x = 0; x < this->size; x++)
		this->zombies[x].Announce();
}