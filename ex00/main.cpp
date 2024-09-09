/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:37:23 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/09 22:54:58 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie stackZomb;
	Zombie *heapZomb = newZombie("Heap zombie");

	stackZomb.setName("Stack zombie");
	stackZomb.announce();
	heapZomb->announce();
	randomChump("Temp Zombie");
	delete heapZomb;

}
