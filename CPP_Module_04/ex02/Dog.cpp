/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:32:05 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/31 15:55:36 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : Brains(new Brain()) {
	type = "Dog";
	std::cout << "Default Constructor is Called From (Dog object)" << std::endl;
}

Dog::~Dog() {
	delete Brains;
	std::cout << "Destructor is Called Form (Dog Object)" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), Brains( new Brain(*other.Brains)) {
	std::cout << "Copy Constructor is Called From (Dog Object)" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		type = other.type;
		*Brains = *other.Brains;
	}
	std::cout << "Copy Assignment Opertor is Called From (Dog Object)" << std::endl;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "* Woof! Woof! *" << std::endl;

}