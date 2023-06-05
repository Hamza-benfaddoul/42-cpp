/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:07:18 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/05 14:11:13 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << "str memory address: " << &str << std::endl;
    std::cout << "ptr memory address: " << &ptr << std::endl;
    std::cout << "ref memory address: " << &ref << std::endl;
    std::cout << "str value: " << str << std::endl;
    std::cout << "ptr value: " << *ptr << std::endl;
    std::cout << "ref value: " << ref << std::endl;

    return (0);
}