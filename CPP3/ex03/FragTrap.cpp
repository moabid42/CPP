/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:47:26 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 01:34:30 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

///////////////////////////////CONSTRUCTORS///////////////////////////////////////

FragTrap::FragTrap(): ClapTrap() {
	
	setName("FragTrap");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap() {
	*this = src;
	std::cout << "FragTrap copy Constructor " << this->getName() << " called" << std::endl;
}

///////////////////////////////DESTRUCTORS///////////////////////////////////////

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

///////////////////////////////OPERATORS///////////////////////////////////////

FragTrap &FragTrap::operator=(FragTrap const &rhs) {

	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = getAttackDamage();
	return (*this);
}

///////////////////////////////OTHERS///////////////////////////////////////

void	FragTrap::highFiveGuys(void) {
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "High Five request!" << std::endl;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}
