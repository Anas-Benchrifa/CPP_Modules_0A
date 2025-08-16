/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:25:57 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/13 01:08:01 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

const std::string	&Zombie::GetName() const {
	return (this->name);
}

void	Zombie::SetName(std::string Name) {
	name = Name;
}

Zombie::Zombie() : name("") {}

Zombie::~Zombie() {
	std::cout << this->name << " Destroyed!" << std::endl;
}

void	Zombie::Announce() {
	std::cout << "Zombie " << "(" <<  name << "):";
	std::cout << " BraiiiiiiinnnzzzZ" << std::endl;
}