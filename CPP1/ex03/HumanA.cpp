/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:34:12 by moabid            #+#    #+#             */
/*   Updated: 2022/11/03 15:45:18 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

//////////////////////////DESTRUCTORS//////////////////////////

HumanA::~HumanA()
{
    std::cout << this->_name << " is dead" << std::endl;
}

//////////////////////////FUNCTIONS//////////////////////////

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

std::string HumanA::getName()
{
    return (this->_name);
}

std::string HumanA::getType() {
    return (_weapon.getType());
}