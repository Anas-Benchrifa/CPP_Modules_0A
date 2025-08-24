/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/24 09:06:38 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
	std::cout << "\n*** Testing ClapTrap ***" << std::endl;
	ClapTrap a;
	ClapTrap b("Cody");

	a.attack("some other ClapTrap");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other ClapTrap");
	
	b.attack("some other ClapTrap");
	b.beRepaired(3);
	
	std::cout << "\n*** Testing ScavTrap ***" << std::endl;
	ScavTrap c;
	ScavTrap d("Scavvy");

	c.attack("some other ClapTrap");
	c.takeDamage(50);
	c.beRepaired(10);
	c.guardGate();
	
	d.attack("some other ClapTrap");
	d.guardGate();
	d.takeDamage(30);
	d.beRepaired(5);
	
	std::cout << "\n*** Testing FragTrap ***" << std::endl;
	FragTrap e;
	FragTrap f("Fragster");

	e.attack("some other ClapTrap");
	e.takeDamage(50);
	e.beRepaired(10);
	e.highFivesGuys();
	
	f.attack("some other ClapTrap");
	f.highFivesGuys();
	f.takeDamage(30);
	f.beRepaired(5);
	
	std::cout << "\n*** Testing Copy Constructor and Assignment ***" << std::endl;
	FragTrap g(f);
	g.attack("copy target");
	g.highFivesGuys();
	
	FragTrap h;
	h = g;
	h.attack("assigned target");
	h.highFivesGuys();
	
	return 0;
}
