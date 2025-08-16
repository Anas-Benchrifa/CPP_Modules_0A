/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:52:45 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/03 17:55:29 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*Zombie;

	Zombie = NewZombie("The King");
	Zombie->Annonce();
	delete Zombie;

	RandomChump("The Queen");
	return (0);
}