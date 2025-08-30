/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:17:55 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/29 15:59:36 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "Default Constructor is Called From (WrongCat object)" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor is Called Form (WrongCat Object)" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "Copy Constructor is Called From (WrongCat Object)" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	std::cout << "Copy Assignment Operator is Called From (WrongCat Object)" << std::endl;
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "* Wrong Cat Meow! *" << std::endl;
}