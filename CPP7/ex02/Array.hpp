/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:12:11 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 16:23:15 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array
{
	private:
		T				*array;
		unsigned int	len;
	public:
		Array();
		Array(unsigned int length);
		Array(const Array &oth);
		~Array();

		Array	&operator=(const Array &obj);
		
		T		&operator[](unsigned int index);
		const T	&operator[](unsigned int index) const;
		unsigned int size() const;
		class OutofBounds : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("[-] EXCEPTION: The Index is Out of Bounds");
			}
		};
};

#include "Array.tpp"
