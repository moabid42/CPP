/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:32:58 by moabid            #+#    #+#             */
/*   Updated: 2022/11/08 03:22:05 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string name_;
        bool        is_signed;
        int const   grade_for_sign;
        int const   grade_for_execute;
    
    public:
        Form();
        Form(std::string name, const int grade_for_sign, const int grade_for_execute);
        Form(Form const &rsc);
        ~Form();

        Form const &operator=(Form const &rsc);

        std::string const &getName() const;
        int const         &getGradeForSign() const;
        int const         &getGradeForExecute() const;
        bool const        &getIsSigned() const;

        void              beSigned(Bureaucrat& bureaucrat);

        class	GradeTooHighException : public std::exception {
			const char		*what() const throw();
		};
		
		class	GradeTooLowException : public std::exception {
			const char		*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &lhs, Form &rhs);