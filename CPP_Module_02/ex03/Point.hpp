/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 03:06:04 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/22 01:10:02 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y;
	public:
		// Orthodox Canonical Form
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();
		
		Fixed getX() const;
		Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream& operator<<(std::ostream& out, const Point& point);
