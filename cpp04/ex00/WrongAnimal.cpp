/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:49:58 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/12 17:06:04 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
  : _type("WrongAnimal")
{
  std::cout << "[ WrongAnimal ] --> Default constractor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{ 
  std::cout << "[ WrongAnimal ] --> copy constractor called" << std::endl;
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
  std::cout << "[ WrongAnimal ] --> assignment operator called" << std::endl;
  _type = other._type;
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "[ WrongAnimal ] --> Destructor called" << std::endl;
}

void  WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal has no sound" << std::endl;
}

// member functions

std::string WrongAnimal::getType() const
{
  return (_type);
}