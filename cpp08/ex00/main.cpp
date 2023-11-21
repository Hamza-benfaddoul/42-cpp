/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:06:21 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/11/21 08:59:06 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main(void)
{
    std::vector<int> v;
    std::list<int> l;
    std::deque<int> d;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    
    try
    {
        easyfind(v, 3);
        easyfind(l, 3);
        easyfind(d, 3);
        easyfind(v, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}