/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:56:13 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/23 14:55:45y hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <stddef.h>
# include <iostream>

template <typename T, typename V>
void    iter(T *array, size_t len, void (*f)(V &))
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void    show(T &x)
{
    std::cout << x << std::endl;
}


#endif /* ITER_HPP */
