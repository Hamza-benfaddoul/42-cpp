/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:21:49 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/03 13:59:32 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const& file) : _rate(0)
{
	std::ifstream ifs(file);
	std::string line;
	std::string name;
	double rate;
	if(ifs.is_open())
	{
		while (std::getline(ifs, line))
		{
			std::istringstream iss(line);
			iss >> name >> rate;
			this->_secondData[name] = rate;
		}
		ifs.close();
	}
	else
	{
		std::cout << "Error: databse file not found" << std::endl;
		exit(1);
	}
}

BitcoinExchange::BitcoinExchange(double rate) : _rate(rate)
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
	{
		this->_rate = other._rate;
		this->_secondData = other._secondData;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::setRate(double rate)
{
	this->_rate = rate;
}

double BitcoinExchange::getRate() const
{
	return (this->_rate);
}

void BitcoinExchange::addRate(std::string const &name, double rate)
{
	this->_secondData[name] = rate;
}

double BitcoinExchange::convert(std::string const &name, double amount) const
{
	std::map<std::string, double>::const_iterator it = this->_secondData.find(name);
	if (it != this->_secondData.end())
		return (amount * it->second);
	return (0);
}

void BitcoinExchange::read_file(std::string const &file)
{
	std::ifstream ifs(file);
	std::string line;
	std::string name;
	double rate;

	if (ifs.is_open())
	{
		while (std::getline(ifs, line))
		{
			std::istringstream iss(line);
			iss >> name >> rate;
			this->_secondData[name] = rate;
		}
		ifs.close();
	}
	else
		std::cout << "Error: file not found" << std::endl;
}

void BitcoinExchange::print_result() const
{
	std::string line;
	std::string name;
	double amount;

	while (std::getline(std::cin, line))
	{
		std::istringstream iss(line);
		iss >> name >> amount;
		std::cout << this->convert(name, amount) << std::endl;
	}
}