/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:12:09 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/06 18:47:48 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string Nying) : name(Nying) {
	std::cout << GRN "Zombie" EOFC;
	std::cout << GREEN ": " << this->name << " Is Created" << EOFC << std::endl;
}

Zombie::~Zombie() {
	std::cout << BLOOD "Zombie" << EOFC;
	std::cout << _BLOOD_ ": " <<this->name << " Is Destroyed" << EOFC << std::endl;
}

void Zombie::Annonce() {
	std::cout << MAG << this->name << EOFC;
	std::cout << _MAG_ << ": BraiiiiiiinnnzzzZ" << EOFC << std::endl;
}