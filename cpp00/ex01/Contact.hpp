/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:39:12 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/03 14:33:29 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {
private:
    std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkset_secret;
public:
	Contact();
	~Contact();
	void setFirstNmae(std::string __first_name, std::string __last_name, std::string __phone_number, std::string __darkest_secret="Unkwon");
	void getData(void);
};

#endif