/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:32:28 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:15:50 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

////////////////////////////CONSTRUCTORS////////////////////////////////////////

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = "None";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = src.Target;
}

////////////////////////////DESTRUCTORS/////////////////////////////////////////

PresidentialPardonForm::~PresidentialPardonForm() {

}

////////////////////////////OPERATORS///////////////////////////////////////////

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	this->Target = obj.Target;
	return *this;
}

////////////////////////////FUNCTIONS/////////////////////////////////////////////

void PresidentialPardonForm::action() const
{
	std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

Form * PresidentialPardonForm::clone(std::string Target)
{
	return new PresidentialPardonForm(Target);
}