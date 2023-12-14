/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:21:49 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/14 18:22:54 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const& file) : _rate(0)
{
	std::ifstream ifs(file);
	std::string line;
	std::string date;
	std::string rate;
	if(ifs.is_open())
	{
		std::getline(ifs, line);
		while (std::getline(ifs, line))
		{
			std::istringstream iss(line);
			std::getline(iss, date, ',');
			std::getline(iss, rate);
			this->_dataBase[date] = std::stod(rate.c_str());
		}
		ifs.close();
	}
	else
	{
		std::cout << "Error: failed to open file" << std::endl;
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
		this->_dataBase = other._dataBase;
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

double BitcoinExchange::convert(std::string const &date, double amount) const
{
	std::map<std::string, double>::const_iterator it = this->_dataBase.find(date);
	if (it != this->_dataBase.end())
		return (amount * it->second);
	else
	{
		for(std::map<std::string, double>::const_iterator it = this->_dataBase.begin(); it != this->_dataBase.end(); ++it)
		{
			if (it->first > date)
			{
				std::map<std::string, double>::const_iterator it2 = it;
				--it2;
					return (amount * it->second);
				//return (amount * ((it->second - it2->second) / (std::stod(it->first) - std::stod(it2->first)) * (std::stod(date) - std::stod(it2->first)) + it2->second));
			}
		}
	}
	return (0);
}

void BitcoinExchange::read_file(std::string const &file)
{
	std::ifstream ifs(file);
	std::string line;
	std::string date;
	std::string value;

	if (ifs.is_open())
	{
		std::getline(ifs, line); // skip first line
		while (std::getline(ifs, line))
		{
			std::istringstream iss(line);
			std::getline(iss, date, '|');
			date.erase(date.end() - 1, date.end()); // remove last char (space)
			std::getline(iss, value);
			this->_secondData[date] = std::stod(value.c_str());
			std::cout << this->_secondData[date] << std::endl;
		}
		ifs.close();
	}
	else
		std::cout << "Error: file not found" << std::endl;
}

void BitcoinExchange::print_result() const
{
	for (std::map<std::string, double>::const_iterator it = this->_secondData.begin(); it != this->_secondData.end(); ++it)
	{
		std::cout << this->convert(it->first, it->second) << std::endl;
	}
}