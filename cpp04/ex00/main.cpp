/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:26:17 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/12 17:07:02 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
  std::cout << "--------------Main tst-----------------------" << std::endl;
  {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete i;
    delete j;
  }

  std::cout << "--------------Wrong Classes-----------------------" << std::endl;
  {
    const WrongAnimal *meta = new WrongAnimal();
    const WrongAnimal *i = new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    meta->makeSound();

    delete meta;
    delete i;
  }
  return 0;
}
