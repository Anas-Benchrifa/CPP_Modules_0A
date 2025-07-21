/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 03:38:26 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/21 13:04:37 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static int	ScanInputThree(std::string Scan)
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

static int	ScanInput(std::string Scan)
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

static void	DisplayInfo(std::string input)
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

void	PhoneBook::AddContact(std::string info[_MAX_])
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
	
	std::cout << std::endl;
	std::cout << YEL << "Inter Contact Information" << EOFC << std::endl;
	std::cout << std::endl;
	
	while (KING)
	{
		std::cout << BLUE << "First Name" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		std::getline(cin , Info[_ZERO_]);
		if (Info[_ZERO_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC;
			std::cout << " Empty Input\n" << std::endl;
			continue;
		}
		break;
	}
	
	// Get Last Name with its own loop
	while (KING)
	{
		std::cout << BLUE << "Last Name" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		std::getline(cin, Info[_ONE_]);
		if (Info[_ONE_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC;
			std::cout << " Empty Input\n" << std::endl;
			continue;
		}
		break;
	}
	
	while (KING)
	{
		std::cout << BLUE << "Nikename" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		std::getline(cin, Info[_TWO_]);
		if (Info[_TWO_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC;
			std::cout << " Empty Input\n" << std::endl;
			continue;
		}
		break;
	}
	
	do {
		std::cout << BLUE <<"Phone Number" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		std::getline(cin, Info[_THREE_]);
		if (Info[_THREE_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC;
			std::cout << " Empty Input\n" << std::endl;
			continue;
		}
		if (!ScanInputThree(Info[_THREE_]))
			break;
		std::cout << BLOOD << "ERROR" << " " << EOFC;
		std::cout << "(" << BLOOD << "Invalid Number" << EOFC;
		std::cout << ")" << _BLOOD_ << ": " << EOFC;
		std::cout << "Inter Numbers Only" << std::endl;
	} while (ScanInputThree(Info[_THREE_]));

	while (KING)
	{
		std::cout << BLUE << "Darkest Secret" << EOFC;
		std::cout << XBLU << ": " << EOFC;
		std::getline(cin, Info[_FOUR_]);
		if (Info[_FOUR_].empty())
		{
			std::cout << BLOOD << "\nError" EOFC;
			std::cout << _BLOOD_ ":" EOFC << EOFC << std::endl;
			std::cout << " Empty Input\n" << std::endl;
			continue;
		}
		break;
	}
	phonebook.AddContact(Info);
	std::cout << std::endl <<GRN "Contact Added Successfully" EOFC;
	std::cout << XGRN "!" EOFC << std::endl;
}

int	PhoneBook::SEARCH(PhoneBook &phonebook)
{
	std::string			input;
	int				index;
	
	phonebook.DisplayPhoneBook();
	std::cout << "\n" << YEL "Enter Index:" EOFC << " ";
	std::getline(cin, input);
	if (input.empty()) {
		std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
		std::cout << "Empty Input (Enter Between 0-7)" << std::endl;
		return (_ZERO_);
	}
	if (!input.empty()) {	
		if (!ScanInput(input) && phonebook.GetSize() != 0) {
			if (stoi(input) < phonebook.index)
				phonebook.DisplayContact(stoi(input));
			else {
				std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
				std::cout << " Index is Out of Range" << std::endl;
			}
		}
		else if (!ScanInput(input) && phonebook.GetSize() == 0) {
			std::cout << VIOLET "\nNotice" EOFC XVIOLET ":" EOFC;
			std::cout << " Library is Empty" << std::endl;
		}
		else if (!ScanInput(input) && stoi(input) >= 7) {
			std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
			std::cout << " Enter Only Numbers Between (0-7)" << std::endl;
		}
		else {
			std::cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
			std::cout << " Enter Only Numbers Between (0-7)" << std::endl;
		}
	}
	return (_ONE_);
}

void	PhoneBook::DisplayContact(int Index) const
{
	
	cout << std::endl;
	cout << WHIT << "*-------------------------------------------*" << EOFC << std::endl;
	cout << WHIT << "|  Contact Information For Specified Index  |" << EOFC << std::endl;
	cout << WHIT << "*-------------------------------------------*" << EOFC << std::endl;
	cout << std::endl;
	cout << "First Name: " << this->contacts[Index].get_firstname_() << std::endl;
	cout << "Last Name: " << this->contacts[Index].get_lastname_() << std::endl;
	cout << "Nickname: " << this->contacts[Index].get_nickname_() << std::endl;
	cout << "Number: " << this->contacts[Index].get_phonenumber_() << std::endl;
	cout << "Darkest Secret: " << this->contacts[Index].get_darkestsecret_() << std::endl;
}

void	PhoneBook::DisplayPhoneBook() const
{
	int	index;

	cout << std::endl;
	cout << WHIT << "+----------+----------+----------+----------+" << EOFC << std::endl;
	cout << WHIT << "|     Index|First Name| Last Name| Nickname |" << EOFC << std::endl;
	cout << WHIT << "+----------+----------+----------+----------+" << EOFC << std::endl;
	
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
		cout << WHIT << "|" << EOFC << std::endl;
	}
	
	cout << WHIT << "+----------+----------+----------+----------+" << EOFC << std::endl;
}
