/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:31:57 by moabid            #+#    #+#             */
/*   Updated: 2022/11/03 15:46:10 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
    private:
        std::string _type;
    
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        void setType(std::string type);
        std::string const &getType();
};