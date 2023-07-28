/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:29:18 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/28 19:04:32 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"


Cat::Cat()
{
  _type = "Cat";
  _sound = "meows meows meows";
  _brain = new Brain();
  std::cout << "[ Cat ] --> Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
  : AAnimal(other)
{
  *this = other;
  std::cout << "[ Cat ] --> copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
  std::cout << "[ Cat ] --> assignment operator called" << std::endl;
  _type = other._type;
  _sound = other._sound;
  _brain = new Brain(*other._brain);
  return (*this);
}

Cat::~Cat()
{
  std::cout << "[ Cat ] --> destructor called" << std::endl;
  delete _brain;
}

void Cat::makeSound() const
{
  std::cout << _type << " make " << _sound << " sound" << std::endl;
}
