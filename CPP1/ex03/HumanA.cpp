/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:34:12 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:19:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), _weapon(weapon)
{
}

//////////////////////////DESTRUCTORS//////////////////////////

HumanA::~HumanA()
{
    std::cout << this->name_ << " is dead" << std::endl;
}

//////////////////////////FUNCTIONS//////////////////////////

void HumanA::attack()
{
    std::cout << name_ << " attacks with his " << _weapon.getType() << std::endl;
}

std::string HumanA::getName()
{
    return (this->name_);
}

std::string HumanA::getType() {
    return (_weapon.getType());
}