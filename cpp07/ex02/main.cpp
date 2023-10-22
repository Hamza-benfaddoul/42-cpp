/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:35:22 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/22 15:35:23by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main()
{
    Array<char> c(5);


    try {

        std::cout << "size of c: " << c.size() << std::endl;
        std::cout << "now we try to add 5 elements to arry c" << std::endl;
        for (size_t i = 0; i < c.size(); i++)
            c[i] = i + 65;
        std::cout << "now we try to display the elements of c" << std::endl;
        std::cout << "c[0]: " << c[0] << std::endl;
        std::cout << "c[1]: " << c[1] << std::endl;
        std::cout << "c[2]: " << c[2] << std::endl;
        std::cout << "c[3]: " << c[3] << std::endl;
        std::cout << "c[4]: " << c[4] << std::endl;
        std::cout << "now we try to access c[5] which is out of range" << std::endl;
        std::cout << "c[5]: " << c[5] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    //system("leaks ex02");
    return 0;
}