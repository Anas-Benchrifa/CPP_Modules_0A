/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:57:29 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/21 13:23:29 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	
	if (argc > 1)
	{
		for (int index = 1; index < argc; ++index)
		{
			for (int to_upper = 0; argv[index][to_upper] != '\0'; to_upper++)
				argv[index][to_upper] = toupper(argv[index][to_upper]);
			std::cout << argv[index];
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}