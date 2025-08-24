/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/24 09:09:49 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string name;
		
	public:
		// Constructors and Destructor
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap();
		
		// Assignment operator
		DiamondTrap& operator=(const DiamondTrap& other);
		
		// Special ability
		void whoAmI();
		
		// Override attack function (uses ScavTrap's attack)
		using ScavTrap::attack;
};
