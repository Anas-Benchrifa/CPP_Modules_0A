/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:16:04 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/30 12:21:49 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Default Constructor is Called From (Brain Object)" << std::endl;
}

Brain::Brain(const Brain& other) {
	for (int x = 0; x < IDS; x++) {
		ideas[x] = other.ideas[x];
	}
	std::cout << "Copy Constructor is Called Form (Brain Object)" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int x = 0; x < IDS; x++) {
			ideas[x] = other.ideas[x];
		}
	}
	std::cout << "Copy Assignment Operator is Called Form (Brain Object)" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "Destructor is Called Form (Brain object)" << std::endl;
}