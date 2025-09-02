/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:00:00 by aben-chr          #+#    #+#             */
/*   Updated: 2025/09/02 16:24:58 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << "\n*** Creating Characters ***" << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << "\n*** Creating and Equipping Materias ***" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n*** Using Materias ***" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n*** Testing Edge Cases ***" << std::endl;
	me->unequip(0);
	me->use(0, *bob);  // Should show nothing to use
	
	// Test creating unknown materia
	tmp = src->createMateria("fire");  // Should return NULL
	me->equip(tmp);  // Should handle NULL gracefully

	std::cout << "\n*** Cleanup ***" << std::endl;
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
