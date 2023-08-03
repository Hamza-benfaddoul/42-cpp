/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:59:30 by hamza             #+#    #+#             */
/*   Updated: 2023/08/03 16:40:32 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
  std::cout << "[ Dog ] --> Default constructor called" << std::endl;
  _type = "Dog";
  _sound = " Woof ruf ruf ruf";
  _brain = new Brain();
}

Dog::Dog(const Dog& other)
  : Animal(other)
{
  std::cout << "[ Dog ] --> copy constructor called" << std::endl;
  *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
  std::cout << "[ Dog ] --> assignment operator called" << std::endl;
  _type = other._type;
  _brain = new Brain();
  for (int i = 0; i < 100; i++)
    _brain->setIdea(i, other._brain->getIdea(i));
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
