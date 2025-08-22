/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 03:05:50 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/22 01:03:46 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::Point(const Point& other) : x(other.x), y(other.y) {
}

Point& Point::operator=(const Point& other) {
	// Note: Since x and y are const, we can't reassign them
	// This is a limitation of const members in Orthodox Canonical Form
	// In practice, this operator might not be very useful with const members
	// but we implement it to satisfy the requirements
	if (this != &other) {
		//We can't modify const members, so this is essentially a no-op
	}
	return *this;
}

Point::~Point() {
}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
	out << "(" << point.getX() << ", " << point.getY() << ")";
	return out;
}
