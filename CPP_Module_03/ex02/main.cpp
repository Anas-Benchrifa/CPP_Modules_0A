/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/28 11:27:48 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {
	
	std::cout << "\n*** Testing FragTrap ***" << std::endl;
	FragTrap c;
	FragTrap d("Fragster");

	c.attack("some other ClapTrap");
	c.takeDamage(50);
	c.beRepaired(10);
	c.highFivesGuys();
	
	d.attack("some other ClapTrap");
	d.highFivesGuys();
	d.takeDamage(30);
	d.beRepaired(5);
	
	std::cout << "\n*** Testing Copy Constructor and Assignment ***" << std::endl;
	FragTrap e(d);
	e.attack("copy target");
	e.highFivesGuys();
	
	FragTrap f;
	f = e;
	f.attack("assigned target");
	f.highFivesGuys();
	
	return 0;
}
