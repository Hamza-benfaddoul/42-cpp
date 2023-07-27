/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:59:30 by hamza             #+#    #+#             */
/*   Updated: 2023/07/27 12:32:12 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
  _type = "Dog";
  _sound = " Woof ruf ruf ruf";
  _brain = new Brain();
  std::cout << "[ Dog ] --> Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
  : Animal(other)
{
  *this = other;
  std::cout << "[ Dog ] --> copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
  std::cout << "[ Dog ] --> assignment operator called" << std::endl;
  _type = other._type;
  _sound = other._sound;
  _brain = new Brain(*other._brain);
  return (*this);
}

Dog::~Dog()
{
  std::cout << "[ Dog ] --> destructor called" << std::endl;
  delete _brain;
}

void Dog::makeSound() const
{
  std::cout << _type << " make " << _sound << " sound" << std::endl;
}
