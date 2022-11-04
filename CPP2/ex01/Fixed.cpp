/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:57:39 by moabid            #+#    #+#             */
/*   Updated: 2022/11/02 21:07:36 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    Fixed::operator=(other);
}

Fixed &Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(other.getRawBits());
    return (*this);
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << this->_fractionalBits;
    std::cout << "The value is : " << value << " and the fixed" << this->_fixedPointValue << std::endl;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
    std::cout << "The value is : " << value << " and the fixed" << this->_fixedPointValue << std::endl;
}

//////////////////////////DESTRUCTOR///////////////////////////

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//////////////////////////GETERS///////////////////////////

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

//////////////////////////SETERS///////////////////////////

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

//////////////////////////MEMBER_FUNCS///////////////////////////

float Fixed::toFloat( void ) const {
    return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const {
    return (this->_fixedPointValue >> this->_fractionalBits);
}

//////////////////////////OPERATORS///////////////////////////

std::ostream& operator << (std::ostream& output, const Fixed &other){
    output << other.toFloat();
    return (output);
}
