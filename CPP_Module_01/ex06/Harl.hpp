/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 03:30:45 by aben-chr          #+#    #+#             */
/*   Updated: 2025/08/16 21:25:15 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#define _ERROR_	-1
#define WARNING	2
#define DEBUG	0
#define ERROR	3
#define INFO	1

class HarlFilter
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void	complain( std::string level );
		int		FindLeveles(std::string level);
};