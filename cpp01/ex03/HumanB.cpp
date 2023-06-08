/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:06:54 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/08 11:44:59 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) { }

HumanB::~HumanB()
{
    this->_weapon = NULL;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
    return ;
}