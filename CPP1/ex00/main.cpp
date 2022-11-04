/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:18:42 by moabid            #+#    #+#             */
/*   Updated: 2022/10/30 20:54:52 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("moabid");
    Zombie Another("Another zombie");
    
    zombie->announce();
    delete zombie;

    Another.announce();
    randomChump("mouad");
    return (0);
}