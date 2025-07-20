/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 03:38:26 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/20 05:45:40 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
using namespace std;
#include <iostream>

void	DisplayInfo(string input)
{
	unsigned int index;

	index  = 0;
	if (input.length() > 10)
		cout << input.substr(0, 9) + ".";
	else
	{
		index = -1;
		while (++index < 10 - input.length())
			cout << " ";
		cout << input;
	}
}

int		PhoneBook::GetSize(void) const {
	return (this->sz);
}

void	PhoneBook::AddContact(string info[_MAX_])
{
	int		index;

	index = this->index;
	this->contacts[index].set_firstname_(info[_ZERO_]);
	this->contacts[index].set_lastname_(info[_ONE_]);
	this->contacts[index].set_nickname_(info[_TWO_]);
	this->contacts[index].set_phonenumber_(info[_THREE_]);
	this->contacts[index].set_darkestsecret_(info[_FOUR_]);
	this->index = (index + 1) % 8;
	
	if (this->sz < 8)
		this->sz++;
}

void	PhoneBook::DisplayContact(int Index) const
{
	cout << endl;
	cout << WHIT << "*-------------------------------------------*" << EOFC << endl;
	cout << WHIT << "|  Contact Information For Specified Index  |" << EOFC << endl;
	cout << WHIT << "*-------------------------------------------*" << EOFC << endl;
	cout << endl;
	cout << "First Name: " << this->contacts[Index].get_firstname_() << endl;
	cout << "Last Name: " << this->contacts[Index].get_lastname_() << endl;
	cout << "Nickname: " << this->contacts[Index].get_nickname_() << endl;
	cout << "Number: " << this->contacts[Index].get_phonenumber_() << endl;
	cout << "Darkest Secret: " << this->contacts[Index].get_darkestsecret_() << endl;
}

void	PhoneBook::DisplayPhoneBook() const
{
	int	index;

	cout << endl;
	cout << WHIT << "+----------+----------+----------+----------+" << EOFC << endl;
	cout << WHIT << "|     Index|First Name| Last Name| Nickname |" << EOFC << endl;
	cout << WHIT << "+----------+----------+----------+----------+" << EOFC << endl;
	
	index = -1;
	while (++index < this->sz)
	{
		cout << WHIT << "|         " << EOFC;
		cout << index;
		cout << WHIT << "|" << EOFC;
		DisplayInfo(this->contacts[index].get_firstname_());
		cout << WHIT << "|" << EOFC;
		DisplayInfo(this->contacts[index].get_lastname_());
		cout << WHIT << "|" << EOFC;
		DisplayInfo(this->contacts[index].get_nickname_());
		cout << WHIT << "|" << EOFC << endl;
	}
	
	cout << WHIT << "+----------+----------+----------+----------+" << EOFC << endl;
}
