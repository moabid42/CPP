/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:54:42 by moabid            #+#    #+#             */
/*   Updated: 2022/11/04 16:00:29 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//////////////////////////CONSTRUCTORS///////////////////////////////////////

Point::Point() : _x(0), _y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
    std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point const &copy) {
    std::cout << "Copy constructor called" << std::endl;
    Point::operator=(copy);
}

Point &Point::operator=(Point const &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->setX(copy._x);
    this->setY(copy._y);
    return (*this);
}

//////////////////////////DESTRUCTOR///////////////////////////////////////

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

//////////////////////////SETTERS///////////////////////////////////////

void Point::setX(Fixed const x)
{
    this->_x = x;
}

void Point::setY(Fixed const y)
{
    this->_y = y;
}

//////////////////////////GETTERS///////////////////////////////////////

Fixed const Point::getX()
{
    return (this->_x);
}

Fixed const Point::getY()
{
    return (this->_y);
}
