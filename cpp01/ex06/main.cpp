/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:36:15 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/10 11:55:55 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if(ac > 1)
    {
        Harl harl;
        harl.complain(av[1]);
    }
    else
        std::cout << "Usage: ./harlFilter [DEBUG, INFO, WARNING, ERROR]" << std::endl;
    return (0);
}