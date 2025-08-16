/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 02:48:10 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/16 03:13:12 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	HarlTPZ::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-specialketchup burger. I really do!.";
	std::cout << std::endl;
}

void	HarlTPZ::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put";
	std::cout << "enough bacon in my burger! If you did, I wouldn't be asking for more!.";
	std::cout << std::endl;
}

void	HarlTPZ::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming";
	std::cout << "for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	HarlTPZ::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	HarlTPZ::complain( std::string Kind )
{
	void	(HarlTPZ::*Actions[]) (void) = {
		&HarlTPZ::debug,
		&HarlTPZ::info,
		&HarlTPZ::warning,
		&HarlTPZ::error,
	};
	
	std::string Levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	for (int x = 0; x < 4; x++) {
		if (Kind == Levels[x]) {
			(this->*Actions[x]) ();
			return;
		}
	}

	std::cout << "This level not exist" << std::endl;
}