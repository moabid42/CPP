/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:51:19 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:19:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

HumanB::HumanB(std::string name) : name_(name)
{
}

//////////////////////////DESTRUCTORS//////////////////////////

HumanB::~HumanB()
{
    std::cout << this->name_ << " is dead" << std::endl;
}

//////////////////////////FUNCTIONS//////////////////////////

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << name_ << " attacks with his " << _weapon->getType() << std::endl;
}

std::string HumanB::getName() {
    return (name_);
}

std::string HumanB::getType() {
    return (_weapon->getType());
}