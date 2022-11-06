/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:08:12 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:19:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

Zombie::Zombie()
{
}

//////////////////////////DESTRUCTORS//////////////////////////

Zombie::~Zombie()
{
    std::cout << this->name_ << " is dead" << std::endl;
}

//////////////////////////MEMBER FUNCTIONS//////////////////////////

void Zombie::announce()
{
    std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name_ = name;
}