/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:29:12 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 22:06:57 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
        Animal();
        Animal(Animal const &src);

    public:
        Animal &operator=(Animal const &rhs);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};