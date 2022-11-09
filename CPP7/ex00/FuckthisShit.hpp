/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FuckthisShit.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:20:42 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 04:22:53 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <class T>
void    swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T>
T    min(T &a, T &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <class T>
T    max(T &a, T &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}