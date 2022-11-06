/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:02:08 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:19:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name_;
        Weapon &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        std::string getName();

        std::string getType();
        
        void attack();
};