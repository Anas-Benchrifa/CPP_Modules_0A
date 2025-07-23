/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 03:47:58 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/21 13:45:08 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>


std::string	CheckInput(std::string Input)
{
	std::getline(cin, Input);
	if (std::cin.eof())
		exit(0);
	return (Input);
}

int main()
{
	PhoneBook	phonebook;
	string		input;

	while (true)
	{
		std::cout << endl;
		std::cout << MAG "PhoneBook ─➤" EOFC _MAG_ " " EOFC;
		input = CheckInput(input);
		if (input == "ADD")
			phonebook.ADD(phonebook);
		else if (input == "SEARCH") {
			if (!phonebook.SEARCH(phonebook))
				continue;
		}
		else if (input == "EXIT")
			break;
		else {
			std::cout << BLOOD "\nError" EOFC  _BLOOD_ ": " EOFC;
			std::cout << "Invalid Command (" GRN "ADD" EOFC;
			std::cout << ", " GRN "SEARCH" EOFC;
			std::cout << " Or " GRN "EXIT" EOFC;
			std::cout << ")" << endl;
		}
	}
}