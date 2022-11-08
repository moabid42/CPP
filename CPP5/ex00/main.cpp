/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:57:11 by moabid            #+#    #+#             */
/*   Updated: 2022/11/08 01:47:03 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int	main(void) {

	Bureaucrat	*bureaucrat;
	
	std::cout << "->Too low constract :\n" << std::endl;
	try {

		bureaucrat = new Bureaucrat("Mouad", 1111);
		std::cout << bureaucrat << std::endl;
		delete bureaucrat;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n->Too high constract :\n" << std::endl;
	try {

		bureaucrat = new Bureaucrat("Mouad", 0);
		std::cout << *bureaucrat << std::endl;
		delete bureaucrat;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n->Limit HIGH Test :\n" << std::endl;
	try {

		bureaucrat = new Bureaucrat("Elisa", 1);
		std::cout << *bureaucrat << std::endl;
		delete bureaucrat;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n->Limit LOW Test :\n" << std::endl;
	try {

		bureaucrat = new Bureaucrat("Linda", 150);
		std::cout << *bureaucrat << std::endl;
		delete bureaucrat;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n->Decrement Test :\n" << std::endl;
	try {

		bureaucrat = new Bureaucrat("Linda", 150);
		bureaucrat->decrement();
		std::cout << *bureaucrat << std::endl;
		delete bureaucrat;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
		delete bureaucrat;
	}
    std::cout << "\n->Increment Test :\n" << std::endl;
    try {

		bureaucrat = new Bureaucrat("Elisa", 1);
		bureaucrat->increment();
		std::cout << *bureaucrat << std::endl;
		delete bureaucrat;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
		delete bureaucrat;
	}
}
