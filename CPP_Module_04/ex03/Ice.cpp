/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:00:00 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/31 16:05:12 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	*this = other;
}

Ice::~Ice(void) {}

Ice&	Ice::operator=(const Ice& other)
{
	this->type = other.type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
