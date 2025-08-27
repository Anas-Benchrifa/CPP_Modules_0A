/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:31:13 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a;
	DiamondTrap b("Diamond");

	a.attack("some other ClapTrap");
	a.takeDamage(50);
	a.beRepaired(10);
	a.guardGate();
	a.highFivesGuys();
	a.whoAmI();
	
	b.attack("some other ClapTrap");
	b.guardGate();
	b.highFivesGuys();
	b.takeDamage(30);
	b.beRepaired(5);
	b.whoAmI();
	
	return 0;
}
