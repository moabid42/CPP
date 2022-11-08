/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:10:51 by moabid            #+#    #+#             */
/*   Updated: 2022/11/06 21:27:41 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(Brain const &src);
        Brain &operator=(Brain const &rhs);
        ~Brain();

        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
};
