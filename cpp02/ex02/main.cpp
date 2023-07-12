/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:27:39 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/12 19:09:59 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2) * Fixed(2) * Fixed(2));
    std::cout << "a" <<  a << std::endl;
    std::cout << "++a" << ++a << std::endl;
    std::cout << "a" << a << std::endl;
    std::cout << "a++" << a++ << std::endl;
    std::cout << "a" << a << std::endl;
    std::cout << "b" << b << std::endl;
    std::cout << "max" << Fixed::max(a, b) << std::endl;
    return 0;
}