/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:31:12 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 04:48:23 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>

void    iter(T *array, int length, void (*f)(T &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template <class T>

void    print(T &n)
{
    std::cout << n << std::endl;
}