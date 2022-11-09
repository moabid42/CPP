/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:11:32 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:11:47 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form *forms[3];

	public:
		Intern();
		Intern(const Intern &obj);
		~Intern();
	
		Intern &operator=(const Intern &obj);
		
		Form * makeForm(std::string Type, std::string Target);
	
		class FromNotFound : public std::exception
		{
		public:
			const char *what() const throw();
		};
};