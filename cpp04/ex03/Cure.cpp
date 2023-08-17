/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:58:39 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/29 15:52:41 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

/* Constructors */

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &other) : AMateria(other)
{
}

Cure::Cure(std::string const &type) : AMateria(type)
{
}

/* Destructor */

Cure::~Cure()
{
}

/* Operators */

Cure &Cure::operator=(Cure const &other)
{
    this->_type = other._type;
    return (*this);
}

/* Member Functions */

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}