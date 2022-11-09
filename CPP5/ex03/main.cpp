/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:35:19 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:30:39 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    Intern intern;

    try
    {
        Form *SCF = intern.makeForm("ShrubberyCreationForm", "mouad");
        Bureaucrat b1("Bob", 136);
        Bureaucrat b2("Jhon", 145);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Form *SCF = intern.makeForm("RobotomyRequestForm", "mouad");
        Bureaucrat b1("Bob2", 44);
        Bureaucrat b2("Jhon2", 72);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Form *SCF = intern.makeForm("PresidentialPardonForm", "mouad");
        Bureaucrat b1("Bob2", 5);
        Bureaucrat b2("Jhon2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Form *SCF = intern.makeForm("None Existing Form", "mouad");
        Bureaucrat b1("Bob2", 5);
        Bureaucrat b2("Jhon2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}