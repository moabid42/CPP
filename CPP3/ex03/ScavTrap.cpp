/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:47:31 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 01:34:41 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

///////////////////////////////CONSTRUCTORS///////////////////////////////////////

ScavTrap::ScavTrap(void) : ClapTrap() {
	
	setName("ScavTrap");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap() {
	*this = src;
	std::cout << "ScavTrap copy Constructor " << this->getName() << " called" << std::endl;
}

///////////////////////////////DESTRUCTORS///////////////////////////////////////

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

///////////////////////////////OPERATORS///////////////////////////////////////

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {

	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = getAttackDamage();
	return (*this);
}

///////////////////////////////OTHERS///////////////////////////////////////

void	ScavTrap::attack(std::string const &target) {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target <<
			" causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "Gate keeper mode on!!" << std::endl;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}

}