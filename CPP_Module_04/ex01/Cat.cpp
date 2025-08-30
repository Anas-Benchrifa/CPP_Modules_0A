/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:03:20 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/30 12:30:54 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() : Brains(new Brain()) {
	type = "Cat";
	std::cout << "Default Constructor is Called From (Cat Object)" << std::endl;
}

Cat::~Cat() {
	delete Brains;
	std::cout << "Destuctor is Called From (Cat Object)" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), Brains(new Brain(*other.Brains)) {
	std::cout << "Copy constructor is Called From (Cat Object)" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		type = other.type;
		*Brains = *other.Brains;
	}
	std::cout << "Copy Assignment Opertor Called From (Cat Object)" << std::endl;
	return  *this;
}

void	Cat::makeSound() const {
	std::cout << "* Meow! *" << std::endl;
}