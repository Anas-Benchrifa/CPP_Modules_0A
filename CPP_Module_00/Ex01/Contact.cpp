/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 02:01:11 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/21 11:11:16 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_firstname_(string F_name) {
	first_name = F_name;
}

void	Contact::set_lastname_(string L_name) {
	this->last_name = L_name;
}

void	Contact::set_nickname_(string N_name) {
	this->nick_name = N_name;
}

void	Contact::set_phonenumber_(string P_number) {
	this->phone_number = P_number;
}

void	Contact::set_darkestsecret_(string D_secret) {
	this->darkest_secret = D_secret;
}

const	string&	Contact::get_firstname_(void) const {
	return (this->first_name);
}

const	string&	Contact::get_lastname_(void) const {
	return (this->last_name);
}

const	string&	Contact::get_nickname_(void) const {
	return (this->nick_name);
}

const	string&	Contact::get_phonenumber_(void) const {
	return (this->phone_number);
}

const	string&	Contact::get_darkestsecret_(void) const {
	return (darkest_secret);
}