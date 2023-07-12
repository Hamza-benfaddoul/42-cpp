/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:56:50 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/12 19:30:43 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors */
Fixed::Fixed(): _fixedPointValue(0){}

Fixed::Fixed(const int i): _fixedPointValue(i << _fractionalBits){}

Fixed::Fixed(const float f): _fixedPointValue(std::roundf((f * (0x1 << _fractionalBits)))){}

Fixed::Fixed(const Fixed &other){
    _fixedPointValue = other.getRawBits();
}

/* Destructor*/
Fixed::~Fixed(){}

/* Operatros */
Fixed& Fixed::operator=(const Fixed& other)
{
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

bool Fixed::operator<(const Fixed & other){
	if (this->_fixedPointValue < other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed & other){
	if (this->_fixedPointValue > other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed & other){
	if (this->_fixedPointValue >= other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed & other){
	if (this->_fixedPointValue <= other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed & other){
	if (this->_fixedPointValue == other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed & other){
	if (this->_fixedPointValue != other._fixedPointValue)
		return (true);
	return (false);
}

int Fixed::operator+(const Fixed& other){
	return(this->_fixedPointValue + other._fixedPointValue);
}

int Fixed::operator-(const Fixed& other){
	return(this->_fixedPointValue - other._fixedPointValue);
}

Fixed Fixed::operator*(const Fixed& other) {
	return(this->toFloat() * other.toFloat());
}

int Fixed::operator/(const Fixed& other){
	return(this->_fixedPointValue / other._fixedPointValue);
}

	/* pos-increment*/
Fixed Fixed::operator++(int){
	Fixed tmp =  *this;
	this->_fixedPointValue++;
	return (tmp);
}
	/* pos-decrement*/
Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	this->_fixedPointValue--;
	return (tmp);
}

	/* pre-decrement*/
Fixed& Fixed::operator--(void){
	this->_fixedPointValue--;
	return (*this);
}

	/* pre-increment*/
Fixed& Fixed::operator++(void){
	this->_fixedPointValue++;
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

Fixed& Fixed::min(Fixed& a, Fixed& b){
	if (a._fixedPointValue < b._fixedPointValue)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, const Fixed& b){
	if (a._fixedPointValue > b._fixedPointValue)
		return (a);
	return ((Fixed&)b);
}
