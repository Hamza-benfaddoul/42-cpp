/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:42:52 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/04 15:24:12 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

#define ye
int PhoneBook::index = 0;
int	main(void)
{
	PhoneBook		phonebook;
	std::string		command;

	while (!std::cin.eof())
	{
		std::cout << "\033[32m ---- PhoneBook ----\033[0m" << std::endl;
		std::cout << "Commands: " << std::endl;
		std::cout << "\033[31mADD \033[0m: To add a contact" << std::endl;
		std::cout << "\033[31mSEARCH \033[0m: To search a contact" << std::endl;
		std::cout << "\033[31mEXIT \033[0m: To exit the program" << std::endl;
		std::cout << "\033[33mEnter a command and press enter: \033[0m";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "\033[31m Invalid command \033[0m" << std::endl;
		std::cin.clear();
	}
}