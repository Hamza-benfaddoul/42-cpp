/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:21:49 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/12/17 16:58:07by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const& file)
{
	std::ifstream ifs(file.c_str());
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
			this->_dataBase[date] = std::strtod(rate.c_str(),NULL);
		}
		ifs.close();
	}
	else
	{
		std::cout << "Error: failed to open file" << std::endl;
		exit(1);
	}
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
	{
		this->_dataBase = other._dataBase;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}


double BitcoinExchange::convert(std::string const &date, double amount)
{
	std::map<std::string, double>::const_iterator it = this->_dataBase.find(date);
	if (it == this->_dataBase.end())
	{
		_dataBase.insert(std::pair<std::string, double>(date, 0));
	it = this->_dataBase.find(date);
		--it;
		_dataBase.erase(date);
		return (amount * it->second);
	}
	return (amount * it->second);
}

int isDigitOnly(std::string const &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) == false)
			return (false);
	}
	return (true);
}

void	checkDate(std::string &date)
{
	std::istringstream iss(date);
	std::string year;
	std::string month;
	std::string day;
	std::getline(iss, year, '-');
	std::getline(iss, month, '-');
	std::getline(iss, day);
	if (isDigitOnly(year) == false || isDigitOnly(month) == false || isDigitOnly(day) == false)
		throw std::runtime_error("Error: bad input => " + iss.str());
	if(std::strtod(year.c_str(), NULL) <= 2008 || std::strtod(year.c_str(), NULL) > 9999)
		throw std::runtime_error("Error: bad input => " + iss.str());
	if(std::strtod(month.c_str(), NULL) < 0 || std::strtod(month.c_str(), NULL) > 12)
		throw std::runtime_error("Error: bad input => " + iss.str());
	if(std::strtod(day.c_str(), NULL) < 0 || std::strtod(day.c_str(), NULL) > 31)
		throw std::runtime_error("Error: bad input => " +  iss.str());
	if(std::strtod(month.c_str(), NULL) == 4 || std::strtod(month.c_str(), NULL) == 6
		|| std::strtod(month.c_str(), NULL) == 9 || std::strtod(month.c_str(), NULL) == 11)
	{
		if(std::strtod(day.c_str(), NULL) > 30)
			throw std::runtime_error("Error: bad input => " + iss.str());
	}
	if (std::strtod(month.c_str(), NULL) == 2 && std::strtod(day.c_str(), NULL) > 28 && (int)std::strtod(year.c_str(), NULL) % 4 != 0)
		throw std::runtime_error("Error: bad input => " + iss.str());
}

void	checkValue(std::string const &value)
{
	char	*end;
	double	val;

	if (value[0] == '-')
		throw std::runtime_error("Error: not a positive number.");
	val = std::strtod(value.c_str(), &end);
	if (*end != '\0' || value.empty() || std::isdigit(value[0]) == false)
		throw std::runtime_error("Error: bad input" + value);
 	if(val < 0 || val > 10000)
		throw std::runtime_error("Error: to large a number");
}

void BitcoinExchange::read_file(std::string const &file)
{
	std::ifstream ifs(file.c_str());
	std::string line;
	std::string date;
	std::string value;

	if (ifs.is_open())
	{

		getline(ifs, line);
		if (line != "date | value")
			throw std::runtime_error("Error: invalid file format");
		while (std::getline(ifs, line, '\n'))
		{
			try
			{
				if (line.empty())
					throw std::runtime_error("Error: empty line");
				std::istringstream iss(line);
				std::getline(iss, date, '|');
				if (date.empty())
					throw std::runtime_error("Error: bad input => " + iss.str());
				if (date.at(date.length() - 1) == ' ')
					date.erase(date.end() - 1, date.end()); // remove last char (space)
				checkDate(date);
				std::getline(iss, value);
				if (value.empty())
					throw std::runtime_error("Error: bad input => " + iss.str());
				if(value.at(0) == ' ')
					value.erase(value.begin(), value.begin() + 1); // remove first char (space)
				checkValue(value);
				std::cout << date << " => " << value << " = " << this->convert(date, std::strtod(value.c_str(), NULL)) << std::endl;
				date.clear();
				value.clear();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		ifs.close();
	}
	else
		std::cout << "Error: file not found" << std::endl;
}

void BitcoinExchange::print_result() const
{
}