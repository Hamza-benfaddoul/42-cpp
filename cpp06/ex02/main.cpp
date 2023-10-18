/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:41:55 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/16 14:42:18 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return (0);
}