/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:00:00 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/31 16:06:36 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice& other);
		~Ice(void);

		Ice&		operator=(const Ice& other);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};
