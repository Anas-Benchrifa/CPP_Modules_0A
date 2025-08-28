/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:41:35 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 14:39:19 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Default Constructor Called From (Animal)" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Called From (Animal)" << std::endl;
}

Animal::Animal(const Animal& other) {
	
}