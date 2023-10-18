/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:30:50 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/16 10:40:50 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>


#include <iostream>

typedef struct Data
{
	std::string	name;
	size_t		age;
	Data		*next;
}				Data;

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();

		Serializer &operator=(const Serializer &src);

		uintptr_t serialize(Data *ptr);
		Data *unserialize(uintptr_t raw);
};



#endif /* SERIALIZER_HPP */