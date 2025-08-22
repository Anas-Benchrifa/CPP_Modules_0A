/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 00:25:06 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/22 00:40:25 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ostream>

class Fixed {
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed( const int Ivalue );
		Fixed( const float Fvalue );
		Fixed( const Fixed& other );
		Fixed& operator=( const Fixed& other );
		~Fixed();

		bool operator>( const Fixed& other );
		bool operator<( const Fixed& other );
		bool operator>=( const Fixed& other );
		bool operator<=( const Fixed& other );
		bool operator==( const Fixed& other );
		bool operator!=( const Fixed& other );
		
		Fixed operator+( const Fixed &other );
		Fixed operator-( const Fixed &other );
		Fixed operator*( const Fixed &other );
		Fixed operator/( const Fixed &other );

		Fixed& operator++();
		Fixed operator++( int );
		Fixed& operator--();
		Fixed operator--( int );

		int     toInt(void) const;
        float   toFloat(void) const;

		// Member functions
        int getRawBits(void) const;    // Returns the raw value
        void setRawBits(int const raw); // Sets the raw value

		static Fixed&	min(Fixed& _class1, Fixed& _class2);
		static const Fixed&	min(const Fixed& _class1, const Fixed& _class2);
		static Fixed&	max(Fixed& _class1, Fixed& _class2);
		static const Fixed&	max(const Fixed& _class1, const Fixed& _class2);
};

std::ostream& operator<<(std::ostream& OFileDescriptor, const Fixed& Object);