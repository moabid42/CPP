/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:08 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:16:15 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

////////////////////////////CONSTRUCTORS////////////////////////////////////////

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45){
	this->Target = "None";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45){
	this->Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = src.Target;
}

////////////////////////////DESTRUCTORS/////////////////////////////////////////

RobotomyRequestForm::~RobotomyRequestForm()
{

}

////////////////////////////OPERATORS///////////////////////////////////////////

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	this->Target = obj.Target;
	return *this;
}

////////////////////////////FUNCTIONS/////////////////////////////////////////////

void	RobotomyRequestForm::action() const
{
	srand((long) this);
    if (rand() & 1) {
        std::cout << "LLLZZzz...." << std::endl;
        std::cout << this->Target << " has been robotomized successfully." << std::endl;
    }
    else {
        std::cout << this->Target << " robotomy failed." << std::endl;
    }
}

Form * RobotomyRequestForm::clone(std::string Target)
{
    return new RobotomyRequestForm(Target);
}