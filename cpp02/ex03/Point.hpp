/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:56:06 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/13 12:43:21 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point {
public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();

private:
    const Fixed _x;
    const Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* PIONT_HPP*/