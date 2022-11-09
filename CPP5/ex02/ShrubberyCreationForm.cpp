/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:36 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:17:19 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/////////////////////////////////////CONSTRUCTORS/////////////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137){
	this->Target = "None";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->Target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form("ShrubberyCreationForm", 145, 137)
{
	this->Target = obj.Target;
}

/////////////////////////////////////DESTRUCTORS/////////////////////////////////////

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

/////////////////////////////////////OPERATORS/////////////////////////////////////

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj){
	this->Target = obj.Target;
	return (*this);	
}

/////////////////////////////////////FUNCTIONS/////////////////////////////////////

void	ShrubberyCreationForm::action() const
{
	std::ofstream outFile(this->Target + "_shrubbery");
	if (!outFile)
	{
		std::cerr << "can't open/create" << this->Target + "_shrubbery" << std::endl;
		return;
	}
	outFile << "               _-_\n"
			   "	    /~~   ~~\\        \n"
			   "	 /~~         ~~\\     \n"
			   "	{               }     \n" 
			   "	 \\\\  _-     -_  /   \n"
			   "	   ~  \\\\ //  ~      \n"
			   "	_- -   | | _- _       \n"
			   "	  _ -  | |   -_       \n"
			   "	      // \\\\\n" << std::endl;
}

Form *ShrubberyCreationForm::clone(std::string target)
{
	return (new ShrubberyCreationForm(target));
}