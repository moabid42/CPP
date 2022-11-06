/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:57:39 by moabid            #+#    #+#             */
/*   Updated: 2022/11/04 22:13:50 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

Fixed::Fixed() : _fixedPointValue(0)
{
}

Fixed::Fixed(const Fixed& other){
    Fixed::operator=(other);
}

Fixed &Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(other.getRawBits());
    return (*this);
}

Fixed::Fixed(const int value) {
    this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) {
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

//////////////////////////DESTRUCTOR///////////////////////////

Fixed::~Fixed()
{
}
//////////////////////////GETERS///////////////////////////

int Fixed::getRawBits(void) const
{
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

Fixed Fixed::operator+(const Fixed &copy){
    return (this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(const Fixed &copy){
    return (this->toFloat() - copy.toFloat());
}

Fixed Fixed::operator*(const Fixed &copy){
    return (this->toFloat() * copy.toFloat());
}

Fixed Fixed::operator/(const Fixed &copy){
    return (this->toFloat() / copy.toFloat());
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);

    this->_fixedPointValue++;
    return (temp);
}

Fixed &Fixed::operator++(){
    ++this->_fixedPointValue;
    return (*this);
}

Fixed Fixed::operator--(int){
    return (this->_fixedPointValue--);
}

Fixed &Fixed::operator--(){
    --this->_fixedPointValue;
    return (*this);
}

bool Fixed::operator>(const Fixed &copy) const {
    return (this->toFloat() > copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const {
    return (this->toFloat() < copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const {
    return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator<=(const Fixed &copy) const {
    return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator==(const Fixed &copy) const {
    return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const {
    return (this->toFloat() != copy.toFloat());
}

//////////////////////////MIN_MAX///////////////////////////

Fixed &Fixed::min(Fixed &a, Fixed &b){
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    if (a > b)
        return (a);
    return (b);
}

