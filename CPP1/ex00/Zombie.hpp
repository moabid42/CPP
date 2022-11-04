/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:19:07 by moabid            #+#    #+#             */
/*   Updated: 2022/10/30 20:57:25 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    

    public:
        Zombie(std::string name);
        ~Zombie();
    
    void announce();
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );