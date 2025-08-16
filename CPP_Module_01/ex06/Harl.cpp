/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:41:48 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/16 21:45:35 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	HarlFilter::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle";
	std::cout << "-special-ketchup burger. I really do!" << std::endl;
}

void	HarlFilter::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	HarlFilter::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for";
	std::cout << "years, whereas you started working here just last month." << std::endl;
}

void	HarlFilter::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	HarlFilter::FindLeveles(std::string lvl) 
{
	if (lvl == "DEBUG")
		return (DEBUG);
	else if (lvl == "INFO")
		return (INFO);
	else if (lvl == "WARNING")
		return (WARNING);
	else if (lvl == "ERROR")
		return (ERROR);
	return (_ERROR_);
}

void	HarlFilter::complain(std::string level)
{
	int	GetLevel;

	GetLevel = FindLeveles(level);
	if (GetLevel == _ERROR_) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}
	switch (GetLevel) {
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;	
	}
}
