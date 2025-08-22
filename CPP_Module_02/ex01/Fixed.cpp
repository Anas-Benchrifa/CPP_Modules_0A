/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:26:17 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/21 02:24:43 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ostream>

Fixed::Fixed() : _value(0) {};

Fixed::Fixed(const int Ivalue) {
	std::cout << "Int Constructor Called" << std::endl;
	_value = Ivalue << _fractionalBits;
}

Fixed::Fixed(const float Fvalue) {
	std::cout << "Float Construtor Caleed" << std::endl;
	_value = roundf(Fvalue * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) : _value(other._value) {
	std::cout << "Copy Constructor Called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "The Copy Assignment Operator Called" << std::endl;
	if (this != &other) {
		this->_value = other._value;
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Call Destructor Befor Destroy Object" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "GetRawBits Member Function Called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "SetRawBits Memer Function Called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_value >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& OFileDescriptor, const Fixed& Fixed) {
	OFileDescriptor << Fixed.toFloat();
	return OFileDescriptor;
}