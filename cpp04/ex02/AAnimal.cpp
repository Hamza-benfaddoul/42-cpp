/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:29:51 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/27 12:31:33 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal()
  : _type("AAnimal") , _sound("Unknown")
{
  std::cout << "[ AAnimal ] --> Default constractor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{ 
  std::cout << "[ AAnimal ] --> copy constractor called" << std::endl;
  *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
  std::cout << "[ AAnimal ] --> assignment operator called" << std::endl;
  _type = other._type;
  _sound = other._sound;
  return (*this);
}

AAnimal::~AAnimal()
{
  std::cout << "[ AAnimal ] --> Destructor called" << std::endl;
}

void  AAnimal::makeSound() const
{
  std::cout << "AAnimal" << " make " << _sound << " sound" << std::endl;
}
