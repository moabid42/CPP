/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:29:06 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:29:14 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm: public Form{
	private:
		std::string Target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &obj);
		void	action() const;
		Form * clone(std::string Target);
};