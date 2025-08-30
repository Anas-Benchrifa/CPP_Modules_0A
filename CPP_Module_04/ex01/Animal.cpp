/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:41:35 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/29 15:41:44 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Unknown") {
	std::cout << "Default Constructor Called From (Animal Object)" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Called From (Animal Object)" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Copy Constructor Called From (Animal Object)" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		type = other.type; 
	}
	return *this;
}

const std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Some animal sound..." << std::endl;
}
