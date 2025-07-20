/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 03:47:58 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/20 05:52:08 by aben-chr         ###   ########.fr       */
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

static void	ADD(PhoneBook &phonebook)
{
	string		Info[_MAX_];
	
	cout << endl;
	cout << YEL << "Inter Contact Information" << EOFC << endl;
	cout << endl;
	
	cout << BLUE << "First Name" << EOFC;
	cout << XBLU << ": " << EOFC;
	getline(cin , Info[_ZERO_]);
	cout << BLUE << "Last Name" << EOFC;
	cout << XBLU << ": " << EOFC;
	getline(cin, Info[_ONE_]);
	cout << BLUE << "Nikename" << EOFC;
	cout << XBLU << ": " << EOFC;
	getline(cin, Info[_TWO_]);
	
	do {
		cout << BLUE <<"Phone Number" << EOFC;
		cout << XBLU << ": " << EOFC;
		getline(cin, Info[_THREE_]);
		if (!ScanInputThree(Info[_THREE_]))
			break;
		cout << BLOOD << "ERROR" << " " << EOFC;
		cout << "(" << BLOOD << "Invalid Number" << EOFC;
		cout << ")" << _BLOOD_ << ": " << EOFC;
		cout << "Inter Numbers Only" << endl;
	} while (ScanInputThree(Info[_THREE_]));

	cout << BLUE << 
	"Darkest Secret" << EOFC;
	cout << XBLU << ": " << EOFC;
	getline(cin, Info[_FOUR_]);
	phonebook.AddContact(Info);
	cout << endl <<GRN "Contact Added Successfully" EOFC;
	cout << XGRN "!" EOFC << endl;
}

static int	SEARCH(PhoneBook &phonebook)
{
	string			input;
	int				index;
	
	phonebook.DisplayPhoneBook();
	cout << "\n" << YEL "Enter Index:" EOFC << " ";
	getline(cin, input);
	if (input.empty()) {
		cout << BLOOD "Error" EOFC _BLOOD_ ":" EOFC;
		cout << "Empty Input (Enter Between 0-7)" << endl;
		return (_ZERO_);
	}
	if (!input.empty()) {	
		if (!ScanInput(input) && phonebook.GetSize() != 0) {
			phonebook.DisplayContact(stoi(input));
		}
		else if (!ScanInput(input) && phonebook.GetSize() == 0) {
			cout << VIOLET "\nNotice" EOFC XVIOLET ":" EOFC;
			cout << " Library is Empty" << endl;
		}
		else {
			cout << BLOOD "\nError" EOFC _BLOOD_ ":" EOFC;
			cout << " Enter Only Numbers Between (0-7)" << endl;
		}
	}
	return (_ONE_);
}

int main()
{
	PhoneBook	phonebook;
	string		input;

	while (true)
	{
		cout << endl;
		cout << MAG "PhoneBook ─➤" EOFC _MAG_ " " EOFC;
		getline(cin, input);
		if (input == "A")
			ADD(phonebook);
		else if (input == "S") {
			if (!SEARCH(phonebook))
				continue;
		}
		else if (input == "EXIT")
			break;
		else {
			cout << BLOOD "\nError" EOFC  _BLOOD_ ": " EOFC;
			cout << "Invalid Command (" GRN "ADD" EOFC;
			cout << ", " GRN "SEARCH" EOFC;
			cout << " Or " GRN "EXIT" EOFC;
			cout << ")" << endl;
		}
	}
}