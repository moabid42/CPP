/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:24:46 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 21:28:01 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

///////////////////////////////CONSTRUCTORS////////////////////////////////////

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

///////////////////////////////OPERATORS////////////////////////////////////

Brain &Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}

///////////////////////////////DESTRUCTORS////////////////////////////////////

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

///////////////////////////////GETTERS////////////////////////////////////

std::string Brain::getIdea(int i) const
{
    return this->ideas[i];
}

///////////////////////////////SETTERS////////////////////////////////////

void Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}
