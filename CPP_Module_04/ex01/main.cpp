/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:37:18 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/30 11:32:13 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "Animal.hpp"

int main() {

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    // Array of animals
    Animal* animals[4];
    for (int k = 0; k < 2; ++k) {
		animals[k] = new Dog();
		std::cout << "---------------" << std::endl;
	}

    for (int k = 2; k < 4; ++k) {
        animals[k] = new Cat();
	}

	std::cout << "****************" << std::endl;
    for (int k = 0; k < 4; ++k) {
        delete animals[k];
	}

	std::cout << "****************" << std::endl;

    // Deep copy
    Dog originalDog;
    Dog copiedDog = originalDog; // Calls Dog copy constructor

    return 0;
}