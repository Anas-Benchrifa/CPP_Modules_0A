/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 00:31:33 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/22 00:38:37 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0) {}
Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& other) {
	this->_value = other._value;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		_value = other._value;
	return *this;
}

int		Fixed::getRawBits() const {
	return _value;
}

Fixed::Fixed(const int Ivlaue) {
	_value = Ivlaue << _fractionalBits;
}

Fixed::Fixed(const float Fvalue) {
	_value = roundf(Fvalue * (1 << _fractionalBits));
}

void	Fixed::setRawBits(int const raw) {
	_value = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

int		Fixed::toInt(void) const {
	return _value >> _fractionalBits;
}

bool	Fixed::operator>(const Fixed& other) {
	return this->_value > other._value;
}

bool	Fixed::operator<(const Fixed& other) {
	return this->_value < other._value;
}

bool	Fixed::operator>=(const Fixed& other) {
	return this->_value >= other._value;
}

bool	Fixed::operator<=(const Fixed& other) {
	return this->_value <= other._value;
}

bool	Fixed::operator==(const Fixed& other) {
	return this->_value == other._value;
}

bool	Fixed::operator!=(const Fixed& other) {
	return this->_value != other._value;
}

Fixed	Fixed::operator+(const Fixed& other) {
	Fixed	temp(this->toFloat() + other.toFloat());
	return temp;
}

Fixed	Fixed::operator-(const Fixed& other) {
	Fixed	temp(this->toFloat() - other.toFloat());
	return temp;
}

Fixed	Fixed::operator*(const Fixed& other) {
	Fixed	temp(this->toFloat() * other.toFloat());
	return temp;
}

Fixed	Fixed::operator/(const Fixed& other) {
	Fixed	temp(this->toFloat() / other.toFloat());
	return temp;
}

Fixed&	Fixed::operator++() {
	_value += 1;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	temp;

	temp._value = _value++;
	return temp;
}

Fixed&	Fixed::operator--() {
	_value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	temp;

	temp._value = _value--;
	return temp;
}

std::ostream&	operator<<(std::ostream& OFileDecriptor, const Fixed& Object) {
	OFileDecriptor << Object.toFloat();
	return OFileDecriptor;
}

Fixed& Fixed::max(Fixed& _class1, Fixed& _class2) {
	return (_class1.getRawBits() > _class2.getRawBits()) ? _class1 : _class2;
}

const Fixed& Fixed::max(const Fixed& _class1, const Fixed& _class2) {
	return (_class1.getRawBits() > _class2.getRawBits()) ? _class1 : _class2;
}

Fixed& Fixed::min(Fixed& _class1, Fixed& _class2) {
	return (_class1.getRawBits() > _class2.getRawBits()) ? _class1 : _class2;
}

const Fixed& Fixed::min(const Fixed& _class1, const Fixed& _class2) {
	return (_class1.getRawBits() > _class2.getRawBits()) ? _class1 : _class2;
}