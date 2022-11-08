/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:29:12 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 17:30:03 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(Animal const &src);
        Animal &operator=(Animal const &rhs);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};