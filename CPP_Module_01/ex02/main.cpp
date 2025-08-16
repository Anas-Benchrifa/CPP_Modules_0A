/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:03:20 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/13 23:02:10 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define VIOLET	"\e[1;38;2;128;0;255m"
#define EOC	"\001\033[0;0m\002"

int	main(void)
{
	std::string string;
	std::string *stringPTR;
	std::string &stringREF = string;

	stringPTR = &string;
	string = "HI THIS IS BRAIN";

	std::cout << VIOLET "\n   ****** Print The Memory Addresses *******" EOC << std::endl;
	std::cout << "The memory address of the string variable: ";
	std::cout << &string << std::endl;
	std::cout << "The memory address held by stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: ";
	std::cout << &stringREF<<std::endl;

	std::cout << VIOLET "\n	****** Print The Values *******" EOC << std::endl;
	std::cout << "The value of the string variable: ";
	std::cout << string << std::endl;
	std::cout << "The value pointed to by stringPTR: ";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: ";
	std::cout << stringREF << std::endl;
	
	return (0);
}