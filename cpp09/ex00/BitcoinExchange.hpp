/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:11:37 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/14 16:06:11 by hbenfadd         ###   ########.fr       */
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
	std::map<std::string, double> _secondData;
	double _rate;
public:
	BitcoinExchange();
	BitcoinExchange(std::string const &file);
	BitcoinExchange(double rate);
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange &operator=(BitcoinExchange const &other);
	~BitcoinExchange();

	void setRate(double rate);
	double getRate() const;
	void addRate(std::string const &name, double rate);
	double convert(std::string const &name, double amount) const;
	
	void read_file(std::string const &file);
	void print_result() const;
};