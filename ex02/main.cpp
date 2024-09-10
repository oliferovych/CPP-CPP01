/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:36:15 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/10 13:48:58 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Variable memory adress: " << &string << std::endl;
	std::cout << "Pointer memory adress: " << stringPTR << std::endl;
	std::cout << "Refference memory adress: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Variable value: " << string << std::endl;
	std::cout << "Pointer value: " << *stringPTR << std::endl;
	std::cout << "Refference value: " << stringREF << std::endl;
	return(0);
}
