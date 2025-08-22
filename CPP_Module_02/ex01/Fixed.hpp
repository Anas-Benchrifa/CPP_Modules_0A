/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:25:12 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/21 02:24:20 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
    private:
        int                 _value; // Integer to store the fixed-point number value
        static const int    _fractionalBits = 8;  // Number of fractional bits (always 8)

    public:
        // Orthodox Canonical Form
        Fixed();                       // Default constructor
        Fixed(const int Ivalue);
        Fixed(const float Fvalue);
        Fixed(const Fixed& other);     // Copy constructor
        Fixed& operator=(const Fixed& other);  // Copy assignment operator
        ~Fixed();                      // Destructor

        int     toInt(void) const;
        float   toFloat(void) const;
        
        // Member functions
        int getRawBits(void) const;    // Returns the raw value
        void setRawBits(int const raw); // Sets the raw value
};

std::ostream&   operator<<(std::ostream& OFileDescriptor, const Fixed& Fixed);