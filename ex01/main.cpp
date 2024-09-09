/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:37:23 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/09 23:14:14 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N = 5;
	Zombie *horde = zombieHorde(N, "Minion");
	for(int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
