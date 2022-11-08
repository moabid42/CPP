/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:31:33 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 17:39:40 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//////////////////////////////////CONSTRUCTORS//////////////////////////////////

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

//////////////////////////////////OPERATORS//////////////////////////////////

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

//////////////////////////////////DESTRUCTORS//////////////////////////////////

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

//////////////////////////////////OTHERS//////////////////////////////////

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
