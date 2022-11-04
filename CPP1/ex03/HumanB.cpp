/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:51:19 by moabid            #+#    #+#             */
/*   Updated: 2022/11/03 15:45:50 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

HumanB::HumanB(std::string name) : _name(name)
{
}

//////////////////////////DESTRUCTORS//////////////////////////

HumanB::~HumanB()
{
    std::cout << this->_name << " is dead" << std::endl;
}

//////////////////////////FUNCTIONS//////////////////////////

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

std::string HumanB::getName() {
    return (_name);
}

std::string HumanB::getType() {
    return (_weapon->getType());
}