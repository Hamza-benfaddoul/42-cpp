/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:11:37 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/30 08:31:44 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
private:
	std::map<std::string, double> _dataBase;
public:
	BitcoinExchange();
	BitcoinExchange(std::string const &file);
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange &operator=(BitcoinExchange const &other);
	~BitcoinExchange();

	double convert(std::string const &date, double amount);
	
	void read_file(std::string const &file);
	void print_result() const;
};