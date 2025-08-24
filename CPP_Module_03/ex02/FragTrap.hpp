/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/24 09:06:24 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		// Constructors and Destructor
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		~FragTrap();
		
		// Assignment operator
		FragTrap& operator=(const FragTrap& other);
		
		// Special ability
		void highFivesGuys(void);
		
		// Override attack function
		void attack(const std::string& target);
};
