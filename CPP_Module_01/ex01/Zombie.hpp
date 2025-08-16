/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:05:25 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/13 00:41:22 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define EOFC	"\001\033[0;0m\002" 
#define _BLOOD_	"\e[1;38;5;1m"
#define GREEN	"\033[1;92m"
#define MAG 	"\e[4;1;36m"
#define GRN 	"\e[4;1;32m"
#define _MAG_ 	"\e[1;36m"
#define BLOOD 	"\e[4;31m"

#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		Zombie();
		
		void				SetName(std::string Name);
		const	std::string	&GetName(void) const;
		void	Announce(void);
};
