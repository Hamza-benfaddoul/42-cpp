/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:42:52 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/03 16:21:32 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void welcome(void){
	std::cout << std::endl;
	std::cout << " Welcome to your PhoneBook " << std::endl;
	std::cout << std::endl;
	std::cout << "--------------USAGE-------------" << std::endl;
	std::cout << "|ADD\t: To add a new contact.\t|" << std::endl;
	std::cout << "|SEARCH\t: To search a contact.  |" << std::endl;
	std::cout << "|EXIT\t: To quit the PhoneBook.|" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	std::string str;
	
	PhoneBook book;
	while(1)	
	{
		welcome();
		std::cin >> str;
		if (str == "ADD")
			book.add_contact();
		else if (str == "SEARCH")
			book.putData();
		else if (str == "EXIT")
			break;
	}
	return (EXIT_SUCCESS);
}