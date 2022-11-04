/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:54:50 by moabid            #+#    #+#             */
/*   Updated: 2022/11/04 16:01:14 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   const ab;
    Fixed   const bc;
    Fixed   const ca;
    Fixed   const ap;
    Fixed   const bp;
    Fixed   const cp;

    ab = (b.getY() - a.getY()) * (point.getX() - a.getX()) - (b.getX() - a.getX()) * (point.getY() - a.getY());
    bc = (c.getY() - b.getY()) * (point.getX() - b.getX()) - (c.getX() - b.getX()) * (point.getY() - b.getY());
    ca = (a.getY() - c.getY()) * (point.getX() - c.getX()) - (a.getX() - c.getX()) * (point.getY() - c.getY());
    ap = (b.getY() - a.getY()) * (a.getX() - a.getX()) - (b.getX() - a.getX()) * (a.getY() - a.getY());
    bp = (c.getY() - b.getY()) * (b.getX() - b.getX()) - (c.getX() - b.getX()) * (b.getY() - b.getY());
    cp = (a.getY() - c.getY()) * (c.getX() - c.getX()) - (a.getX() - c.getX()) * (c.getY() - c.getY());
    if ((ab * ap >= 0) && (bc * bp >= 0) && (ca * cp >= 0))
        return (true);
    else
        return (false);
}
