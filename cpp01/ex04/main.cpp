/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:49:43 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/06 17:25:25 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(char **argv, std::string str)
{
	int				pos;
	std::ofstream	outfile;

	outfile.open((std::string(argv[1]) + ".replace").c_str(), std::ios::app);
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile << std::endl;
	outfile.close();
	return (0);
}


int main(int ac, char **av)
{
	std::string str;
	std::ifstream ifile;

	if (ac != 4)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		std::cout << "Try: ./replace [filename] [string to replace] [string to replace with]" << std::endl;
		return (1);
	}
	ifile.open(av[1]);
	if (ifile.fail())
	{
		std::cout << "Error: Failed to open file" << std::endl;
		return (1);
	}
	if (std::ifstream((std::string(av[1]) + ".replace").c_str()))
	{
		std::remove((std::string(av[1]) + ".replace").c_str());
	}
	while (std::getline(ifile, str))
	{
		if (replace(av, str))
		{
			std::cout << "Error: Failed to create file" << std::endl;
			return (1);
		}
	}
	ifile.close();
	return (0);
}
