/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:32:30 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/13 11:13:42 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
# include "Brain.hpp"

void run(){
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j; // should not create a leak
    delete i;
  }
  std::cout << "----------------------------------------------" << std::endl;
  {
    Animal *array[10];

    for (int i = 0; i < 10; i++)
    {
      if (i % 2 == 0)
        array[i] = new Dog();
      else
        array[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
      delete array[i];
  }
  std::cout << "----------------------------------------------" << std::endl;
  {
    Dog dog1;
    Dog dog2;

    dog1 = dog2;
  }
  {
    Cat cat1;
    Cat cat2;

    cat1 = cat2;
  }

}

int main()
{
  run();
  
  // system("leaks ex01");
 return 0;
}