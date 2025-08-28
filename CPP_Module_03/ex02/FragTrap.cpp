/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/28 11:17:56 by aben-chr         ###   ########.fr       */
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

void FragTrap::highFivesGuys(void) {
	if (hitPoints == 0) {
		std::cout << "FragTrap " << name << " is dead and cannot request high fives!" << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "FragTrap " << name << " has no energy points left to request high fives!" << std::endl;
		return;
	}
	
	energyPoints--; // High fiving costs energy
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
