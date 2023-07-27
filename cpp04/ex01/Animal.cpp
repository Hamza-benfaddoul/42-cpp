/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:29:51 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/27 12:31:33 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
  : _type("Animal") , _sound("Unknown")
{
  std::cout << "[ Animal ] --> Default constractor called" << std::endl;
}

Animal::Animal(const Animal &other)
{ 
  std::cout << "[ Animal ] --> copy constractor called" << std::endl;
  *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
  std::cout << "[ Animal ] --> assignment operator called" << std::endl;
  _type = other._type;
  _sound = other._sound;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "[ Animal ] --> Destructor called" << std::endl;
}

void  Animal::makeSound() const
{
  std::cout << "Animal" << " make " << _sound << " sound" << std::endl;
}
