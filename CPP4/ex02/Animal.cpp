/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:30:10 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 17:30:42 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

//////////////////////////OPERATORS//////////////////////////

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

//////////////////////////DESTRUCTORS//////////////////////////

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

//////////////////////////GETTERS//////////////////////////

std::string Animal::getType() const
{
    return this->type;
}

//////////////////////////OTHERS//////////////////////////

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
