/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:50:23 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/03 16:09:11 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add_contact(void);
	void	search_contact(void);
	void	putData(){
		for(int i = 0; i < 8; i++)
		{
			std::cout << "--------------"<<std::endl;

			contacts[i].getData();
		}
	}
private:
	static int index;
	Contact	contacts[8];
};

#endif

