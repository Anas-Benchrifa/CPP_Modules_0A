/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:33:57 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/13 23:01:03 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

#define VIOLET	"\e[4;1;38;2;128;0;255m"
#define XVIOLET	"\e[1;38;2;128;0;255m"
#define EOFC	"\001\033[0;0m\002"
#define _BLOOD_	"\e[38;5;1m"
#define GREEN	"\033[0;92m"
#define BLUE 	"\e[4;1;34m"
#define MAG 	"\e[4;1;36m"
#define GRN 	"\e[4;1;32m"
#define YEL 	"\e[4;1;33m"
#define WHIT	"\e[1;30m"
#define XBLU	"\e[1;34m"
#define XGRN 	"\e[1;32m"
#define _MAG_ 	"\e[1;36m"
#define BLOOD 	"\e[4;31m"
#define KING	44
#define _ZERO_	0
#define _ONE_	1
#define _TWO_	2
#define _THREE_	3
#define _FOUR_	4
#define _MAX_	5

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
		int		sz;
	public:
		PhoneBook() : index(0), sz(0) {}
		int		GetSize(void) const;
		void	AddContact(string info[5]);
		void	DisplayContact(int Search) const;
		void	DisplayPhoneBook(void) const;
		void	ADD(PhoneBook &phonebook);
		int		SEARCH(PhoneBook &phonebook);
};
