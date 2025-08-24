/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/24 09:06:24 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Default") {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap " << name << " assignment operator called" << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << "FragTrap " << name << " is dead and cannot attack!" << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "FragTrap " << name << " has no energy points left to attack!" << std::endl;
		return;
	}
	
	energyPoints--;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
