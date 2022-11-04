/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:50:08 by moabid            #+#    #+#             */
/*   Updated: 2022/10/30 20:52:22 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

Zombie::Zombie(std::string name)
{
    this->name = name;
}

//////////////////////////DESTRUCTORS//////////////////////////

Zombie::~Zombie()
{
    std::cout << this->name << " is dead" << std::endl;
}

//////////////////////////MEMBER FUNCTIONS//////////////////////////

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}