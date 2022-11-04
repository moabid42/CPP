/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:54:32 by moabid            #+#    #+#             */
/*   Updated: 2022/11/04 16:00:24 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    
    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &copy);
        Point &operator=(Point const &copy);
        ~Point();
    
    void setX(Fixed const x);
    void setY(Fixed const y);

    Fixed const getX();
    Fixed const getY();
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);