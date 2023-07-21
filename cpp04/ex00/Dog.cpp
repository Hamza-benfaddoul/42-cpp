/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:59:30 by hamza             #+#    #+#             */
/*   Updated: 2023/07/19 17:01:27 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
  _type = "Dog";
  _sound = " Woof ruf ruf ruf";
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
  return (*this);
}

Dog::~Dog()
{
  std::cout << "[ Dog ] --> destructor called" << std::endl;
}

