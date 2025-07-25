/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:51:56 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/21 11:11:10 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
using namespace std;

class Contact 
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		void			set_darkestsecret_(string D_secret);
		void			set_phonenumber_(string P_number);
		void			set_firstname_(string F_name);
		void			set_lastname_(string L_name);
		void			set_nickname_(string N_name);
		const	string&	get_firstname_(void) const;
		const	string&	get_lastname_(void) const;
		const	string&	get_nickname_(void) const;
		const	string&	get_phonenumber_(void) const;
		const	string&	get_darkestsecret_(void) const;
};
