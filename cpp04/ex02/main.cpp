/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:32:30 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/03 17:22:16 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
# include "Brain.hpp"

int main()
{
  const AAnimal *j = new Dog();
  const AAnimal *i = new Cat();
  i->makeSound(); // should output the cat sound!
  j->makeSound(); // should output the dog sound!
  delete j; // should not create a leak
  delete i;

  return 0;
}