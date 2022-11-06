/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:27:54 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 21:52:20 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("moabid");
    ScavTrap scav("serena");

    clap.attack("serena");
    scav.takeDamage(10);
    scav.beRepaired(10);

    clap.beRepaired(10);
    scav.attack("moabid");
    clap.takeDamage(10);
    clap.attack("serena");
    scav.guardGate();
    
    return 0;
}