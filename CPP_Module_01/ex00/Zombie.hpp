/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:02:07 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/06 18:50:48 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#define EOFC	"\001\033[0;0m\002" 
#define _BLOOD_	"\e[1;38;5;1m"
#define GREEN	"\033[1;92m"
#define MAG 	"\e[4;1;36m"
#define GRN 	"\e[4;1;32m"
#define _MAG_ 	"\e[1;36m"
#define BLOOD 	"\e[4;31m"

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string Nying);
		~Zombie();
		void Annonce(void);
};

Zombie	*NewZombie(std::string Nying);
void	RandomChump(std::string Nying);