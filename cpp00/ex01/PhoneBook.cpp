/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:51:10 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/16 14:57:15 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
# include "Contact.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

void PhoneBook::add_contact(void){
    std::string	contact_data[5];

    std::cout << "--- ADD CONTACT ---" << std::endl;
    std::cout << "Enter first name: ";
	std::getline(std::cin, contact_data[0]);
	std::cout << "Enter last name: ";
	std::getline(std::cin, contact_data[1]);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, contact_data[2]);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, contact_data[3]);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, contact_data[4]);
	if (contacts[index].setContact(contact_data[0], contact_data[1], contact_data[2], contact_data[3], contact_data[4]))
		return ;
	this->index = ++this->index % 8;
}

void    PhoneBook::search_contact(void)
{
    std::string	index;

	std::cout << "search contact" << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->contacts[i].display_contact();
	}
    std::cout << "\033[33m Enter an index: \033[0m";
    getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
        contacts[std::stoi(index)].getContact();
    else
        std::cout << "Invalid index" << std::endl;
}