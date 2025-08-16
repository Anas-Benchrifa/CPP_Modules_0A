/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 01:20:11 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/14 01:31:11 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		
		const std::string	&GetType(void) const;
		void				SetType(std::string type); 
};