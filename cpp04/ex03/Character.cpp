/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:56:45 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/29 14:57:23 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructors */

Character::Character() : _name("default"), _count(0)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &other) : _name(other._name), _count(other._count)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = other._inventory[i];
}

Character::Character(std::string const &name) : _name(name), _count(0)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

/* Destructor */

Character::~Character()
{
}

/* Operators */

Character &Character::operator=(Character const &other)
{
    this->_name = other._name;
    this->_count = other._count;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = other._inventory[i];
    return (*this);
}

/* Member Functions */

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    if (this->_count < 4)
    {
        this->_inventory[this->_count] = m;
        this->_count++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_inventory[idx] = NULL;
        this->_count--;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
        this->_inventory[idx]->use(target);
}