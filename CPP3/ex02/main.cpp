/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:27:54 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 22:02:54 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("moabid");
    FragTrap frag("serena");

    clap.attack("serena");
    frag.takeDamage(10);
    frag.beRepaired(10);

    clap.beRepaired(10);
    frag.attack("moabid");
    clap.takeDamage(10);
    clap.attack("serena");
    frag.highFivesGuys();
    
    return 0;
}