/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:34:04 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/27 14:59:27 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();

		Animal&	operator=(const Animal& other);
		const	std::string GetType() const;
		virtual	void	MakeSound() const;
};