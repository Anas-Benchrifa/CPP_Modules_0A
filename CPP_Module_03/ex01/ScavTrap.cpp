/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/28 11:04:16 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("Default") {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	isGuardingGate = false;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	isGuardingGate = false;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	isGuardingGate = other.isGuardingGate;
	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		isGuardingGate = other.isGuardingGate;
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
	if (hitPoints == 0) {
		std::cout << "ScavTrap " << name << " is dead and cannot enter Gate keeper mode!" << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ScavTrap " << name << " has no energy points left to enter Gate keeper mode!" << std::endl;
		return;
	}
	if (isGuardingGate) {
		std::cout << "ScavTrap " << name << " is already in Gate keeper mode!" << std::endl;
		return;
	}
	
	energyPoints--;
	isGuardingGate = true;
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::stopGuardingGate() {
	if (!isGuardingGate) {
		std::cout << "ScavTrap " << name << " is not currently in Gate keeper mode!" << std::endl;
		return;
	}
	
	isGuardingGate = false;
	std::cout << "ScavTrap " << name << " has stopped guarding the gate." << std::endl;
}

bool ScavTrap::isInGateKeeperMode() const {
	return isGuardingGate;
}
