#include <iostream>
#include "./PhoneBook.hpp"
# include "Contact.hpp"
PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}
int PhoneBook::index = 0;
void PhoneBook::add_contact(void)
{
    std::string first_name;
    std::string phone_number;
    std::string last_name;

    std::cout << "Enter your first name : ";
    std::getline(std::cin, first_name);
    std::cout << "Enter your last name : ";
    std::getline(std::cin, last_name);
    std::cout << "Enter your phone number : ";
    std::getline(std::cin, phone_number);
    if (index == 8)
        index = 0;
    contacts[index++].setFirstNmae(first_name, last_name, phone_number);

}