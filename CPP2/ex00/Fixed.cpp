/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:38:10 by moabid            #+#    #+#             */
/*   Updated: 2022/11/04 21:17:32 by moabid           ###   ########.fr       */
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

//////////////////////////DESTRUCTOR//////////////////////////

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//////////////////////////MEMBER_FUNCS//////////////////////////

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw ) {
    this->_fixedPointValue = raw;
}