/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:56:50 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/11 13:24:20 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors */
Fixed::Fixed(): _fixedPointValue(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i): _fixedPointValue(i << _fractionalBits){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): _fixedPointValue(std::roundf((f * (0x1 << _fractionalBits)))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    _fixedPointValue = other.getRawBits();
}

/* Destructor*/
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

/* Operatros */
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other) {
    os << other.toFloat();
    return (os);
}

/* Memeber functions*/
void Fixed::setRawBits(int const rew){
    _fixedPointValue = rew;
}

int Fixed::getRawBits() const{
    return(_fixedPointValue);
}

int Fixed::toInt(void) const{
    return (_fixedPointValue >> _fractionalBits);
}

float Fixed::toFloat(void) const{
    return ((float)(_fixedPointValue) / (0x1 << _fractionalBits));
}
