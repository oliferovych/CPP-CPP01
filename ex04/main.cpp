/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:53:39 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/10 14:52:40 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Insufficient amount of arguments." << std::endl;
		return (0);
	}
	std::fstream file(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::cerr << "File \"" << argv[1] << "\"is inaccessible." << std::endl;
		return (0);
	}
	file.close();
	return (1);
}

std::string	destFileName(const std::string &sourceFile)
{
	std::string	destFile = sourceFile;
	std::string	newFiletype = ".replace";
	size_t	pos = destFile.find_last_of('.');
	if (pos == std::string::npos)
		destFile.append(newFiletype);
	else
	{
		destFile.erase(pos);
		destFile.append(newFiletype);
	}
	return (destFile);
}

int	copy_file(const std::string &sourceFile, const std::string &s1, const std::string &s2)
{
	std::string		destFile = destFileName(sourceFile);
	std::ifstream	inFile(sourceFile);
	std::ofstream	outFile(destFile);

	std::string line;
	while(std::getline(inFile, line))
	{
		size_t pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
	return (1);
}

int	main(int argc, char **argv)
{
	if(!check_args(argc, argv))
		return (1);
	if(!copy_file(argv[1], argv[2], argv[3]))
		return(1);
	return (0);
}
