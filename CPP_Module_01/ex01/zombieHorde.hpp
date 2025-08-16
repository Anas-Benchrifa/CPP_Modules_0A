/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:22:18 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/13 00:46:35 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zombie.hpp"
#include <string>

class ZombieHorde
{
	private:
		static std::string	RandomNames[9];
		Zombie				*zombies;
		int					size;
	public:
		ZombieHorde(int size);
		~ZombieHorde();
		void announce();
};
