/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:47:34 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 01:37:08 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void) {

	ClapTrap	a("Mouad");
	DiamondTrap	e("grandson");

	std::cout << e << std::endl;
	e.attack(a.getName());
	std::cout << e << std::endl;
	e.takeDamage(6);
	std::cout << e << std::endl;
	e.berepaired(6);
	std::cout << e << std::endl;
	std::cout << "-----------------" << std::endl;
	e.whoAmI();
	std::cout << "-----------------" << std::endl;

	return (0);
}