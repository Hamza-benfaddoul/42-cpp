/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:22:24 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/30 18:14:47 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (!ac)
	{
		std::cout << "Usage: ./bitcoin [inputfile]" << std::endl;
		return (1);
	}
	try
	{
		BitcoinExchange	btc("data.csv");
		btc.read_file("input.txt");
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << std::endl;
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}