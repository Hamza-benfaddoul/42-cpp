/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:34:01 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/03 14:27:57 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(){}
Contact::~Contact(){}


void Contact::setFirstNmae(std::string __first_name, std::string __last_name, std::string __phone_number, std::string __darkset_secret){
    first_name = __first_name;
    std::cout << "first_name : " << first_name <<std::endl;
    last_name = __last_name;
    phone_number = __phone_number;
    darkset_secret =  __darkset_secret;
};

void Contact::getData(void){
    std::cout << "first_name : " << this->first_name <<std::endl;
    std::cout << "last_name : " << last_name <<std::endl;
    std::cout << "phone_number : " << phone_number <<std::endl;
    std::cout << "darkset_secret : " << darkset_secret <<std::endl;
}
