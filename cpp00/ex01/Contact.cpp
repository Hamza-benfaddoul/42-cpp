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
#include <iomanip>


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
    if ( first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
    {
        std::cout << "\033[31mError: empty field\033[0m\n" << std::endl;
        return ;
    }
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void Contact::display_contact()
{
    std::cout << std::setw(10) << (first_name.length() > 10 ? first_name.substr(0,9) + "." : first_name) << "|";
    std::cout << std::setw(10) << (last_name.length() > 10 ? last_name.substr(0,9) + "." : last_name) << "|";
    std::cout << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0,9) + "." : nickname) << std::endl;
}