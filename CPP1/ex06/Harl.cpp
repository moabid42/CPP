/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:43:16 by moabid            #+#    #+#             */
/*   Updated: 2022/11/03 15:56:43 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/////////////////////////////CONSTRUCTORS///////////////////////////////////

Harl::Harl()
{
}

/////////////////////////////DESTRUCTORS////////////////////////////////////

Harl::~Harl()
{
}

/////////////////////////////MEMBER FUNCTIONS////////////////////////////////

void	Harl::complain(std::string level){
	
    int opt;

	std::string ptr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*function[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::notValid};
	
    opt = 42;
    for (int i = 0; i < 4; i++)
		if (!ptr[i].compare(level))
            opt = i;
    switch(opt){
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*function[opt])();
            std::cout<< std::endl;
            opt++;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*function[opt])();
            std::cout<< std::endl;
            opt++;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*function[opt])();
            std::cout<< std::endl;
            opt++;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*function[opt])();
            break;
        default:
            (this->*function[4])();
    }
	return;
}

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;    
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::notValid( void ) {
    std::cerr << "[ Probably complaining about insignificant problems ]";
}