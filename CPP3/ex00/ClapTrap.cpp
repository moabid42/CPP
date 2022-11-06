/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:27:03 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:32:49 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/////////////////////////////////////CONSTRUCTORS///////////////////////////////

ClapTrap::ClapTrap(std::string name) : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

/////////////////////////////////////DESTRUCTORS////////////////////////////////

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

/////////////////////////////////////FUNCTIONS//////////////////////////////////

void    ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name_ << " takes " << amount << " points of damage!" << "and we have now " << this->hit_points_ << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name_ << " is repaired for " << amount << " points!" << "And now we have " << this->energy_points_<< std::endl;
}
