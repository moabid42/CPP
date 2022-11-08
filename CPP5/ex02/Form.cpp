/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:44:55 by moabid            #+#    #+#             */
/*   Updated: 2022/11/08 03:13:22 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/////////////////////////////CONSTRACTORS/////////////////////////////////

Form::Form() : name_("default"), is_signed(false), grade_for_sign(150), grade_for_execute(150)
{
}

Form::Form(std::string name, const int grade_for_sign, const int grade_for_execute) : name_(name), grade_for_sign(grade_for_sign), grade_for_execute(grade_for_execute)
{
    if (grade_for_sign < 1 || grade_for_execute < 1)
        throw GradeTooHighException();
    else if (grade_for_sign > 150 || grade_for_execute > 150)
        throw GradeTooLowException();
    else
        is_signed = false;
}

Form::Form(Form const &rsc) : name_(rsc.getName()), grade_for_sign(rsc.getGradeForSign()), grade_for_execute(rsc.getGradeForExecute())
{
    *this = rsc;
}

/////////////////////////////OPERATORS///////////////////////////////////   

Form	const &Form::operator=(Form const &rsc)
{
    this->name_ = rsc.getName();
    this->is_signed = rsc.getIsSigned();
    return(*this);
}

std::ostream	&operator<<(std::ostream &lhs, Form &rhs)
{
    lhs << rhs.getName() << ", form grade " << rhs.getGradeForSign() << " to sign and " << rhs.getGradeForExecute() << " to execute";
    return (lhs);
}

/////////////////////////////DETRUCTORS/////////////////////////////////

Form::~Form()
{
}

/////////////////////////////GETTERS/////////////////////////////////

std::string const &Form::getName() const
{
    return (this->name_);
}

int const &Form::getGradeForSign() const
{
    return (this->grade_for_sign);
}

int const &Form::getGradeForExecute() const
{
    return (this->grade_for_execute);
}

bool const &Form::getIsSigned() const
{
    return (this->is_signed);
}

/////////////////////////////FUNCTIONS/////////////////////////////////

void    Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= this->grade_for_sign)
        this->is_signed = true;
    else
        throw GradeTooLowException();
}

/////////////////////////////EXCEPTIONS/////////////////////////////////

const char	*Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

