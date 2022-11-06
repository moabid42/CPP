/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:16:32 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 21:49:40 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/////////////////////////////////////CONSTRUCTORS///////////////////////////////

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    setHit_point(100);
    setEnergy_point(50);
    setAttack_damage(20);
}

/////////////////////////////////////DESTRUCTORS////////////////////////////////

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}


/////////////////////////////////////FUNCTIONS//////////////////////////////////

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
}