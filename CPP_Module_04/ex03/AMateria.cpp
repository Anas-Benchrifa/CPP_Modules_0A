/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 14:58:45 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/31 15:58:00 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(const std::string& type) : type(type) {
	std::cout << "AMateria " << type << " created" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria " << type << " destroyed" << std::endl;
}

const std::string& AMateria::getType(void) const {
	return type;
}