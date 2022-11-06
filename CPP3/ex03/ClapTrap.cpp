/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:47:21 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 01:33:28 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

///////////////////////////////CONSTRUCTORS///////////////////////////////////////

ClapTrap::ClapTrap(void) :	name("ClapTrap"),
							hitPoints(10),
							energyPoints(10),
							attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):	name(name),
										hitPoints(10),
										energyPoints(10),
										attackDamage(0)
{
	std::cout << "Constructor " << this->getName()  << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
	std::cout << "Copy Constructor " << this->getName()  << " called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy) {
	std::cout << "Copy assignment operator called\n";
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
  return (*this);
}

///////////////////////////////DECONSTRUCTOR///////////////////////////////////////

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor " << this->getName()  << " called" << std::endl;
}

///////////////////////////////OPERATIONS///////////////////////////////////////

std::ostream&	operator << (std::ostream& lhs, ClapTrap& copy)
{
	lhs << "* The name iss : " << copy.getName() << std::endl;
	lhs << "-> HitPoints: " << copy.getHitPoints() << std::endl;
	lhs << "-> EnergyPoints: " << copy.getEnergyPoints() << std::endl;
	lhs << "-> AttackDamage: " <<	copy.getAttackDamage() << std::endl;

	return (lhs);
}

///////////////////////////////GETTERS///////////////////////////////////////

std::string const	&ClapTrap::getName() const {
	return (this->name);
}

int const	&ClapTrap::getHitPoints() const {
	return (this->hitPoints);
}

int const	&ClapTrap::getEnergyPoints() const {
	return (this->energyPoints);
}

int const	&ClapTrap::getAttackDamage() const {
	return (this->attackDamage);
}

///////////////////////////////SETTERS///////////////////////////////////////

void	ClapTrap::setName(std::string name) {
	this->name = name;
}

void	ClapTrap::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints) {
	this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage) {
	this->attackDamage = attackDamage;
}

///////////////////////////////OTHER///////////////////////////////////////

void	ClapTrap::attack(const std::string& target) {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ClapTrap " << this->getName() << " attacks " << target <<
			" causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ClapTrap " << this->getName() << " take damage of " 
		<< amount << " points!!!" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints < 0)
			this->hitPoints = 0;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

void	ClapTrap::berepaired(unsigned int amount) {
		
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ClapTrap " << this->getName() << " repairs " 
			<< amount << " points!!!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}
