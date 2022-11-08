/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:33:40 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 17:39:57 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//////////////////////////////////CONSTRUCTOR////////////////////////////////////

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

//////////////////////////////////OPERATORS////////////////////////////////////

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

//////////////////////////////////DESTRUCTOR////////////////////////////////////

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

//////////////////////////////////OTHERS////////////////////////////////////

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}