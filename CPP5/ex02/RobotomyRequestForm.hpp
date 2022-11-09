/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:31 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:15:23 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

class RobotomyRequestForm: public Form{
	private:
		std::string Target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &obj);
		void	action() const;
		Form * clone(std::string Target);
};