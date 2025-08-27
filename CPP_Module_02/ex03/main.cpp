/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:31:13 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

void testPoint(const Point& a, const Point& b, const Point& c, const Point& point, const std::string& description) {
	std::cout << "Testing: " << description << std::endl;
	std::cout << "Triangle vertices: " << a << ", " << b << ", " << c << std::endl;
	std::cout << "Point: " << point << std::endl;
	
	bool result = bsp(a, b, c, point);
	std::cout << "Result: " << (result ? "INSIDE" : "OUTSIDE") << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

int main() {
	std::cout << "=== BSP (Binary Space Partitioning) Tests ===" << std::endl;
	std::cout << "Testing if points are inside triangles" << std::endl;
	std::cout << "============================================" << std::endl << std::endl;
	
	// Test 1: Simple triangle with point inside
	Point a1(0, 0);
	Point b1(4, 0);
	Point c1(2, 4);
	Point inside1(2, 2);
	testPoint(a1, b1, c1, inside1, "Point inside triangle (center)");
	
	// Test 2: Point outside triangle
	Point outside1(5, 5);
	testPoint(a1, b1, c1, outside1, "Point outside triangle");
	
	// Test 3: Point on vertex
	Point vertex1(0, 0);
	testPoint(a1, b1, c1, vertex1, "Point on vertex A");
	
	// Test 4: Point on edge
	Point edge1(2, 0);
	testPoint(a1, b1, c1, edge1, "Point on edge AB");
	
	// Test 5: Point on edge (different edge)
	Point edge2(1, 2);
	testPoint(a1, b1, c1, edge2, "Point on edge AC");
	
	// Test 6: Point very close to edge (should be outside)
	Point close1(2.001f, 0);
	testPoint(a1, b1, c1, close1, "Point very close to edge (outside)");
	
	// Test 7: Point very close to edge (should be inside)
	Point close2(1.999f, 0.001f);
	testPoint(a1, b1, c1, close2, "Point very close to edge (inside)");
	
	// Test 8: Different triangle orientation
	Point a2(0, 0);
	Point b2(0, 4);
	Point c2(4, 0);
	Point inside2(1, 1);
	testPoint(a2, b2, c2, inside2, "Different triangle orientation - point inside");
	
	// Test 9: Point outside different triangle
	Point outside2(-1, -1);
	testPoint(a2, b2, c2, outside2, "Different triangle - point outside");
	
	// Test 10: Degenerate triangle (all points on same line)
	Point a3(0, 0);
	Point b3(2, 0);
	Point c3(4, 0);
	Point test3(1, 0);
	testPoint(a3, b3, c3, test3, "Degenerate triangle (all points on line)");
	
	// Test 11: Very small triangle
	Point a4(0, 0);
	Point b4(0.1f, 0);
	Point c4(0, 0.1f);
	Point inside4(0.05f, 0.05f);
	testPoint(a4, b4, c4, inside4, "Very small triangle - point inside");
	
	// Test 12: Point constructor tests
	std::cout << "=== Point Constructor Tests ===" << std::endl;
	Point defaultPoint;
	std::cout << "Default constructor: " << defaultPoint << std::endl;
	
	Point paramPoint(3.14f, 2.71f);
	std::cout << "Parameter constructor: " << paramPoint << std::endl;
	
	Point copyPoint(paramPoint);
	std::cout << "Copy constructor: " << copyPoint << std::endl;
	
	Point assignPoint;
	assignPoint = paramPoint;
	std::cout << "Assignment operator: " << assignPoint << std::endl;
	
	std::cout << "=== All Tests Completed ===" << std::endl;
	
	return 0;
}
