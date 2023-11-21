/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:09:58 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/11/21 09:00:48 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class  NotFoundException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("Element not found");
        }
};


template <typename T>
void    easyfind(T container, int n)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        std::cout << "Element found" << std::endl;
    else
        throw NotFoundException();
}