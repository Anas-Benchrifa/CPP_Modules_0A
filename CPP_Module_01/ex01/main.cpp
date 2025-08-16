/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:05:18 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/12 01:41:37 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"
#include <iostream>

int main()
{
	ZombieHorde	horde(5);
	
	std::cout << "\nI Just Created 5 Zombies!!!\n" << std::endl;
	std::cout << "Let's make them announce themselves\n" << std::endl;
	
	horde.announce();
	std::cout << "\nCall Destructor Before Destroying an Object\n" << std::endl;
	return (0);
}