/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:23:36 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/08 22:01:29 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nThis is a standard debug message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nThis is an aquaintant info message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nThis is a common warning message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is a well-known error message" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptmf[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == complain[i])
		{
			(this->*ptmf[i])();
			return ;
		}
	}
	std::cout << "Uknown HARL level(" << std::endl;
}
