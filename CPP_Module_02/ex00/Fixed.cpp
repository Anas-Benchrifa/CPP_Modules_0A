/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 23:34:16 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/18 02:29:12 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Default constructor
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& other) : _value(other._value) {
    std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other._value;
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Returns the raw value of the fixed-point value
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called " << this->_value << std::endl;
    return this->_value;
}

// Sets the raw value of the fixed-point number
void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}
