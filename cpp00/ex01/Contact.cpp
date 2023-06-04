/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:34:01 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/04 15:08:50y hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(){}
Contact::~Contact(){}

void    Contact::getContact()
{
	std::cout <<  "\033[32m ---- Contact ----\033[0m" << std::endl;
    std::cout << "first name: " << this->first_name << std::endl;
    std::cout << "last name: " << this->last_name << std::endl;
    std::cout << "nickname: " << this->nickname << std::endl;
    std::cout << "phone number: " << this->phone_number << std::endl;
    std::cout << "darkest secret: " << this->darkest_secret << std::endl;
} 

void    Contact::setContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void Contact::display_contact()
{
    std:: cout << (first_name.length() > 10 ? first_name.substr(0, 9) + "." : first_name.length() < 10 ? first_name + std::string(10 - first_name.length(), ' ') : first_name) << " | ";; 
    std::cout << (last_name.length() > 10 ? last_name.substr(0, 9) + "." : last_name.length() < 10 ? last_name + std::string(10 - last_name.length(), ' ') : last_name) << " | ";
    std::cout << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname.length() < 10 ? nickname + std::string(10 - nickname.length(), ' ') : nickname) << std::endl;
}