/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:47:24 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 01:34:20 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

///////////////////////////////CONSTRUCTORS///////////////////////////////////////

DiamondTrap::DiamondTrap(): ClapTrap(),  ScavTrap(), FragTrap(), name("DiamondTrap"){

	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {

	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "DiamondTrap constructor called" << std::endl;
	std::cout << this->name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& src) : ClapTrap(), ScavTrap(), FragTrap() {
	*this = src;
	std::cout << "DiamondTrap copy Constructor " << this->getName() << " called" << std::endl;
}

///////////////////////////////DESTRUCTORS///////////////////////////////////////

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

///////////////////////////////OPERATORS///////////////////////////////////////

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {

	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = getAttackDamage();
	return (*this);
}

///////////////////////////////GETTERS///////////////////////////////////////

std::string const	&DiamondTrap::getName() const {
	return (this->name);
}

///////////////////////////////SETTERS///////////////////////////////////////

void		DiamondTrap::setName(std::string name) {
	this->name = name;
}
void	DiamondTrap::attack(std::string const &target){
	ScavTrap::attack(target);
}

///////////////////////////////OTHERS///////////////////////////////////////

void	DiamondTrap::whoAmI(void) {

	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
	std::cout <<"DiamondTrap name: "<< this->name << std::endl;
}