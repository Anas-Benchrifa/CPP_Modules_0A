/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 01:24:01 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/14 01:30:42 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

const	std::string& Weapon::GetType(void) const {
	return (type);
}

void Weapon::SetType(std::string Type) {
	this->type = Type;
}