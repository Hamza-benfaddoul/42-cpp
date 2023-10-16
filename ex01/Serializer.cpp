/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:41:15 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/16 10:42:24 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator=(const Serializer &src)
{
	if (this == &src)
		return *this;
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::unserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}