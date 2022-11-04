/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:29:28 by moabid            #+#    #+#             */
/*   Updated: 2022/11/03 15:54:10 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[]){

	Harl txt;

	if (argc != 2){
		std::cout << "Incorrect number of arguments!!" << std::endl;
		return (1);
	}
    for (int i = 1; i < argc; i++)
        txt.complain(argv[i]);
	return (0);
}
