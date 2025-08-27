/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:31:13 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
 		BSP (Binary Space Partitioning) function
 		Determines if a point is inside a triangle
		
 		Algorithm: Using cross products to determine the orientation
 		A point is inside a triangle if it's on the same side of all three edges
		
 		Returns: true if point is inside the triangle, false otherwise
 		Note: Points on edges or vertices return false
 */
bool bsp(Point const a, Point const b, Point const c, Point const point) {
	
	/* Calculate the cross products to determine orientation
		We'll use the formula: (B - A) × (P - A) to determine which side of edge AB point P is on */
	
	/* Vector AB = B - A */
	Fixed abx = b.getX() - a.getX();
	Fixed aby = b.getY() - a.getY();

	Fixed acx = c.getX() - a.getX();
	Fixed acy = c.getY() - a.getY();

	Fixed apx = point.getX() - a.getX();
	Fixed apy = point.getY() - a.getY();
	
	/* Like: abx.operator*(apy); */
	Fixed cross1 = abx * apy - aby * apx;
	Fixed cross2 = acx * apy - acy * apx;
	Fixed cross3 = abx * acy - aby * acx;
	
	// Check if the point is on the same side of all edges
	// For a point to be inside, all cross products should have the same sign
	// (all positive or all negative, depending on triangle orientation)
	
	// If any cross product is zero, the point is on an edge or vertex
	if (cross1 == 0 || cross2 == 0 || cross3 == 0) {
		return false; // Point is on edge or vertex
	}
	
	// Check if all cross products have the same sign
	bool sign1 = cross1 > 0;
	bool sign2 = cross2 > 0;
	bool sign3 = cross3 > 0;
	
	// For the point to be inside, cross1 and cross2 should have the same sign
	// and cross3 should have the opposite sign (due to triangle winding)
	return (sign1 == sign2) && (sign1 != sign3);
}
