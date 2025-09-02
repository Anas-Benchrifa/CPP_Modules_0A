/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 14:55:36 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/31 15:57:50 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ICharacter;

class AMateria {
	protected:
		std::string	type;
	public:
		AMateria(const std::string& type);
		virtual ~AMateria(void);

		virtual const std::string&	getType(void) const;
		virtual AMateria*			clone() const = 0;
		virtual void				use(ICharacter& target) = 0;
};