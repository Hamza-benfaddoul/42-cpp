/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:19:25 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/06 15:28:33 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(){}

std::string const &Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
