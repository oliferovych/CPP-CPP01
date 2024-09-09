/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:23:36 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/10 00:16:11 by dolifero         ###   ########.fr       */
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
	int i = 0;
	std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptmf[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4)
	{
		if (level == complain[i])
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		(this->*ptmf[i++])();
		//Fall through
	case 1:
		(this->*ptmf[i++])();
		//Fall through
	case 2:
		(this->*ptmf[i++])();
		//Fall through
	case 3:
		(this->*ptmf[i++])();
		return ;
	default:
		std::cout << "[Isnignificant inanticipated complaint, not worth attention]" << std::endl;
		break;
	}
}
