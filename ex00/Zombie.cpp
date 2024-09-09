/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:46:43 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/09 22:45:50 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::getName() const
{
	return (name);
}

void	Zombie::setName(const std::string &name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : name("Unnamed Zombie")
{
}

Zombie::~Zombie()
{
	std::cout << getName() << ": Destroyyyeeeddd..." << std::endl;
}
