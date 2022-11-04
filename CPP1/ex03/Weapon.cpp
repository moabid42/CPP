/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:54:39 by moabid            #+#    #+#             */
/*   Updated: 2022/11/03 15:46:36 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    _type = type;
}

//////////////////////////DESTRUCTORS//////////////////////////

Weapon::~Weapon()
{
}

//////////////////////////MEMBER FUNCTIONS//////////////////////////

void Weapon::setType(std::string type) {
    _type = type;
}

std::string const &Weapon::getType() {
    return (_type);
}
