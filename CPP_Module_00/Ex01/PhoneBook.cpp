/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 03:38:26 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/21 11:26:00 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static int	ScanInputThree(string Scan)
{
	int	index;

	index = 0;
	while (Scan[index]) {
		if (Scan[index] == ' ' || Scan[index] == '\t')
			index++;
		if (Scan[index] && (Scan[index] >= '0' && Scan[index] <= '9'))
		{
			if (index == 9)
				return (_ZERO_); 
		}
		index++;
	}
	return (_ONE_);
}

static int	ScanInput(string Scan)
{
	int	index;

	index = 0;
	while (Scan[index]) {
		if (Scan[index] == ' ' || Scan[index] == '\t')
			index++;
		if (Scan[index] && (Scan[index] >= '0' && Scan[index] <= '9'))
			return (_ZERO_);
		index++;
	}
	return (_ONE_);
}

static void	DisplayInfo(string input)
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

void	PhoneBook::ADD(PhoneBook &phonebook)
{
	std::string		Info[_MAX_];
	
	std::cout << endl;
	std::cout << YEL << "Inter Contact Information" << EOFC << endl;
	std::cout << endl;
	
	while (true)
	{
		std::cout << BLUE << "First Name" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		getline(cin , Info[_ZERO_]);
		if (Info[_ZERO_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC;
			std::cout << " Empty Input\n" << endl;
			continue;
		}
		break;
	}
	
	// Get Last Name with its own loop
	while (true)
	{
		std::cout << BLUE << "Last Name" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		getline(cin, Info[_ONE_]);
		if (Info[_ONE_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC;
			std::cout << " Empty Input\n" << endl;
			continue;
		}
		break;
	}
	
	while (true)
	{
		std::cout << BLUE << "Nikename" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		getline(cin, Info[_TWO_]);
		if (Info[_TWO_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC;
			std::cout << " Empty Input\n" << endl;
			continue;
		}
		break;
	}
	
	do {
		std::cout << BLUE <<"Phone Number" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		getline(cin, Info[_THREE_]);
		if (Info[_THREE_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC << endl;
			std::cout << " Empty Input\n" << endl;
			continue;
		}
		if (!ScanInputThree(Info[_THREE_]))
			break;
		std::cout << BLOOD << "ERROR" << " " << EOFC;
		std::cout << "(" << BLOOD << "Invalid Number" << EOFC;
		std::cout << ")" << _BLOOD_ << ": " << EOFC;
		std::cout << "Inter Numbers Only" << endl;
	} while (ScanInputThree(Info[_THREE_]));

	while (true)
	{
		std::cout << BLUE << "Darkest Secret" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		getline(cin, Info[_FOUR_]);
		if (Info[_FOUR_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC << endl;
			std::cout << " Empty Input\n" << endl;
			continue;
		}
		break;
	}
	phonebook.AddContact(Info);
	std::cout << endl <<GRN "Contact Added Successfully" EOFC;
	std::cout << XGRN "!" EOFC << endl;
}

int	PhoneBook::SEARCH(PhoneBook &phonebook)
{
	string			input;
	int				index;
	
	phonebook.DisplayPhoneBook();
	std::cout << "\n" << YEL "Enter Index:" EOFC << " ";
	getline(cin, input);
	if (input.empty()) {
		std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
		std::cout << "Empty Input (Enter Between 0-7)" << endl;
		return (_ZERO_);
	}
	if (!input.empty()) {	
		if (!ScanInput(input) && phonebook.GetSize() != 0) {
			if (stoi(input) < phonebook.index)
				phonebook.DisplayContact(stoi(input));
			else {
				std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
				std::cout << " Index is Out of Range" << endl;
			}
		}
		else if (!ScanInput(input) && phonebook.GetSize() == 0) {
			std::cout << VIOLET "\nNotice" EOFC XVIOLET ":" EOFC;
			std::cout << " Library is Empty" << endl;
		}
		else if (!ScanInput(input) && stoi(input) >= 7) {
			std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
			std::cout << " Enter Only Numbers Between (0-7)" << endl;
		}
		else {
			std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
			std::cout << " Enter Only Numbers Between (0-7)" << endl;
		}
	}
	return (_ONE_);
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
