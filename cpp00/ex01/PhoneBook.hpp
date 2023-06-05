/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:50:23 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/05 11:48:44 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"
# include <iomanip>
class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add_contact(void);
	void	search_contact(void);
private:
	static int index;
	Contact	contacts[8];
	void dispyaly_contact(int _index);
};


#endif

