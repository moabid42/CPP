/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:08:10 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:19:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
    private:
        std::string name_;

    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);

    void announce();
};

Zombie* zombieHorde( int N, std::string name );