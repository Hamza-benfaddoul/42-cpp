/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:22:24 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/03 14:00:28 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av, char **env)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./bitcoin [inputfile]" << std::endl;
		return (1);
	}
	BitcoinExchange	btc("data.csv");

	btc.read_file(av[1]);
	btc.print_result();
	return (0);
}