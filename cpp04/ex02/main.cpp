/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:32:30 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/13 11:13:10 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
# include "Brain.hpp"

int main()
{
    std::cout << "----------------Main tst-------------------------" << std::endl;
    {
        const AAnimal *j = new Dog();
        const AAnimal *i = new Cat();
        delete j; // should not create a leak
        delete i;
    }
    std::cout << "----------------Half cat half dog----------------" << std::endl;
    {
        AAnimal *array[10];

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
    std::cout << "---------------Dep copy dog----------------------" << std::endl;
    {
        Dog dog1;
        Dog dog2;

        dog1 = dog2;
    }
    std::cout << "---------------Dep copy cat----------------------" << std::endl;
    {
        Cat cat1;
        Cat cat2;

        cat1 = cat2;
    }

    return 0;
}
