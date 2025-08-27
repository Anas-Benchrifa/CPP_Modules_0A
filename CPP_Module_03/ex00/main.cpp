/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:30:41 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a;
	ClapTrap b("Cody");

	a.attack("some other ClapTrapAF0");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other ClapTrap");
	
	b.attack("some other ClapTrapZ0");
	b.beRepaired(3);
	
	return 0;
}
