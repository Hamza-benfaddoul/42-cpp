/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:52:24 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/12 17:06:39 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  _type = "WrongCat";
  _sound = "meows meows meows";
  std::cout << "[ WrongCat ] --> Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
  : WrongAnimal(other)
{
  std::cout << "[ WrongCat ] --> copy constructor called" << std::endl;
  *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
  std::cout << "[ WrongCat ] --> assignment operator called" << std::endl;
  _type = other._type;
  _sound = other._sound;
  return (*this);
}

WrongCat::~WrongCat()
{
  std::cout << "[ WrongCat ] --> destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
  std::cout << _type << " make " << _sound << " sound" << std::endl;
}
