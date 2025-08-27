/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:31:13 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap() {
	name = "Default";
	hitPoints = 100;  // FragTrap's HP
	energyPoints = 50; // ScavTrap's EP
	attackDamage = 30; // FragTrap's AD
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	this->name = name;
	hitPoints = 100;  // FragTrap's HP
	energyPoints = 50; // ScavTrap's EP
	attackDamage = 30; // FragTrap's AD
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	name = other.name;
	std::cout << "DiamondTrap " << name << " copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		name = other.name;
	}
	std::cout << "DiamondTrap " << name << " assignment operator called" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
