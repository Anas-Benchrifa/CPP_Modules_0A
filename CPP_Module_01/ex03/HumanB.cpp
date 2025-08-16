/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 01:43:53 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/14 02:20:31 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void	HumanB::Attack(void) {
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->GetType() << std::endl;
	else
		std::cout << "HumanB could not obtain a weapon" <<std::endl;
}