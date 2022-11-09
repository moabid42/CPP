/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:35:19 by moabid            #+#    #+#             */
/*   Updated: 2022/11/08 23:52:53 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Form *SCF = new ShrubberyCreationForm("home"); // form 145 137
		Bureaucrat b1("Bob", 136);
        Bureaucrat b2("Jhon", 145);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try {
        Form *SCF = new RobotomyRequestForm("home"); 
        Bureaucrat b1("Bob2", 44);
        Bureaucrat b2("Jhon2", 72);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
    try {
        Form *SCF = new PresidentialPardonForm("ascii_tree");
        Bureaucrat b1("Bob2", 5);
        Bureaucrat b2("Jhon2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return (0);
}
