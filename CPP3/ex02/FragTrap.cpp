/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:59:53 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 22:01:32 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//////////////////////////CONSTRUCTORS//////////////////////////

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    setHit_point(100);
    setEnergy_point(100);
    setAttack_damage(30);
}

//////////////////////////DESTRUCTORS///////////////////////////

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

//////////////////////////FUNCTIONS/////////////////////////////

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " has entered in High five guys mode" << std::endl;
}