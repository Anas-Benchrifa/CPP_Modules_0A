/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:01:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 11:52:49 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		~FragTrap();
		
		FragTrap& operator=(const FragTrap& other);
		
		void highFivesGuys(void);
		
		void attack(const std::string& target);
};
