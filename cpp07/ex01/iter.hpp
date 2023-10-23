/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:56:13 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/23 14:30:05 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <stddef.h>
# include <iostream>

template <typename T>
void    iter(T *array, size_t len, void (*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void    iter(T *array, size_t len, void (*f)(T &))
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void    show(T const &x)
{
    std::cout << x << std::endl;
}


#endif /* ITER_HPP */
