/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:59:48 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/13 12:39:03 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp" 

Point::Point():_x(0), _y(0) {}

Point::Point(const Fixed x, const Fixed y):_x(x), _y(y) {}

Point::Point(const Point& other):_x(other._x) , _y(other._y) {}

Point::~Point(){}

Point& Point::operator=(const Point& other){
    (void)other;
    return *this;
}