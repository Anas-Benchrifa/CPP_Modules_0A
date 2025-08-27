/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:31:13 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), 
											energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << name << " assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is dead and cannot attack!" << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy points left to attack!" << std::endl;
		return;
	}
	
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
		return;
	}
	
	if (amount >= hitPoints) {
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " takes " << amount << " damage and dies!" << std::endl;
	} else {
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " damage! Hit points remaining: " << hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is dead and cannot be repaired!" << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy points left to repair!" << std::endl;
		return;
	}
	
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself and gains " << amount << " hit points! Total hit points: " << hitPoints << std::endl;
}

std::string ClapTrap::getName() const {
	return name;
}

unsigned int ClapTrap::getHitPoints() const {
	return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return attackDamage;
}
