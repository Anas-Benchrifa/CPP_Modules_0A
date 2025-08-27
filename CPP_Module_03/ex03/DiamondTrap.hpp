/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:52:38 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string name;
		
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap();
		
		DiamondTrap& operator=(const DiamondTrap& other);

		void whoAmI();

		using ScavTrap::attack;
};