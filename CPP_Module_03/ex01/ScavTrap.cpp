/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:31:13 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("Default") {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap " << name << " assignment operator called" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << "ScavTrap " << name << " is dead and cannot attack!" << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ScavTrap " << name << " has no energy points left to attack!" << std::endl;
		return;
	}
	
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
