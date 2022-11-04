/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:39:34 by moabid            #+#    #+#             */
/*   Updated: 2022/11/01 14:41:34 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl txt;

    if (argc != 2)
    {
        std::cout << "Incorrect number of arguments!!" << std::endl;
        return (1);
    }
    txt.complain(argv[1]);
}