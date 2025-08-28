/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/28 11:00:21 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
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
	d.guardGate(); // Try to enter gate keeper mode again
	d.stopGuardingGate();
	d.guardGate(); // Enter gate keeper mode again
	d.takeDamage(30);
	d.beRepaired(5);
	
	std::cout << "\n*** Testing Copy Constructor and Assignment ***" << std::endl;
	ScavTrap e(d);
	e.attack("copy target");
	e.guardGate();
	
	ScavTrap f;
	f = e;
	exit(0);
	f.attack("assigned target");
	f.guardGate();
	
	return 0;
}
