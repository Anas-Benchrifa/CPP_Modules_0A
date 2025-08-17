/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:08:54 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/17 23:07:21 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

#define ERROR -1
#define Z0 0

static int	OpenIostreams(std::fstream& istream, std::fstream &ostream, char *FileName)
{
	istream.open(FileName, std::ios::in);
	ostream.open(strcat(FileName, ".replace"), std::ios::out);
	if (!istream.is_open() || !ostream.is_open()) {
		std::cout << "Error: Problem Opening File." << std::endl;
		return (ERROR);
	}
	return (0);
}

static void	Replace(std::string &_Replace, char *s1, char *s2)
{
	std::size_t	pos;
	std::size_t len;

	pos = _Replace.find(s1);
	len = strlen(s1);
	while (pos != std::string::npos)
	{
		_Replace.replace(pos, len, s2);
		pos = _Replace.find(s1, (pos + len));
	}
}

int main(int argc, char **argv)
{
	std::fstream	istream;
	std::fstream	ostream;
	std::string		line;
	char			*s1;
	char			*s2;

	if (argc != 4) {
		std::cout << "Error (Expects): <FileName> <StringToReplace> <StringToReplaceWith>" << std::endl;
		return (ERROR);
	}

	s1 = strdup(argv[2]);
	s2 = strdup(argv[3]);
		
	if (OpenIostreams(istream, ostream, argv[1]))
		return (ERROR);
	
	while (getline(istream, line))
	{
		Replace(line, s1, s2);
		std::cout << line;
		if (!istream.eof())
			std::cout << std::endl;
	}
	
	istream.close();
	ostream.close();
	return (0);
}