/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array2.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:07:26 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 15:11:07 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

////////////////////////////////////////CONSTRUCTORS////////////////////////////////////////

template<typename T>
Array<T>::Array()
{
	len = 0;
	array = new T[0];	
}

template <typename T>
Array<T>::Array(unsigned int length)
{
	len = length;
	array = new T[length];
	for (unsigned int i = 0; i < len; i++)
	{
		array[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array &oth)
{
	len = oth.size();
	array = new T[oth.size()];
	for (unsigned int i = 0; i < len; i++)
	{
		array[i] = oth[i];
	}
}

////////////////////////////////////////DESTRUCTOR////////////////////////////////////////

template <typename T>
Array<T>::~Array()
{
	delete[] array;
}

////////////////////////////////////////OPERATORS////////////////////////////////////////

template<typename T>
Array<T>	&Array<T>::operator=(const Array &obj)
{
	delete[] array;
	array = new T[obj.size()];
	len = obj.size();
	for (unsigned int i = 0; i < len; i++)
	{
		array[i] = obj[i];
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= len)
		throw Array::OutofBounds();
	return (array[index]);
}

template<typename T>
const T	&Array<T>::operator[](unsigned int index) const
{
	if (index >= len)
		throw Array::OutofBounds();
	return (array[index]);
}

////////////////////////////////////////OTHERS////////////////////////////////////////

template <typename T>
unsigned int Array<T>::size() const
{
	return len;
}
