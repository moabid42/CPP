/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:02 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:14:59 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "iostream"

class PresidentialPardonForm: public Form{
	private:
		std::string Target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string Target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &obj);
		void	action() const;
		Form * clone(std::string Target);
};
