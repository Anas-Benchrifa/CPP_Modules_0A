/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:11:41 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/29 15:15:42 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() {
	std::cout << "Default Constructor is Called From (WrongAnimal object)" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor is Called Form (WrongAnimal Object)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	this->type = other.type;
	std::cout << "Copy Constructor is Called From (WrongAnimal Object)" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout << "Copy Assignment Operator is Called From (WrongAnimal Object)" << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
} 

void	WrongAnimal::makeSound() const {
	std::cout << "* Wrong Animal Sound! *" << std::endl;
}