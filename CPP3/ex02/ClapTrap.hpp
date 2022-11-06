/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:24:14 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 21:47:54 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    private:
        std::string name_;
        int         hit_points_;
        int         energy_points_;
        int         attack_damage_;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        void setHit_point(int hit_points);
        void setEnergy_point(int energy_points);
        void setAttack_damage(int attack_damage);

        std::string getName() const;

        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};