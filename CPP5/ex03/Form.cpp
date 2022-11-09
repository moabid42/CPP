/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:55:46 by moabid            #+#    #+#             */
/*   Updated: 2022/11/08 23:56:51 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/////////////////////////////////////CONSTRUCTORS/////////////////////////////////////

Form::Form(): Name("None"), GradeToSign(1), GradeToExecute(1)
{
    this->IsSigned = false;
}

Form::Form(std::string Name, int Sing, int Execute) : Name(Name), GradeToSign(Sing), GradeToExecute(Execute)
{
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw  Form::GradeTooLowException();
    this->IsSigned = false;
}

Form::Form(const Form &oth): Name(oth.Name), GradeToSign(oth.GradeToSign), GradeToExecute(oth.GradeToExecute) {
    *this = oth;
}

/////////////////////////////////////DESTRUCTOR/////////////////////////////////////

Form::~Form()
{
}

/////////////////////////////////////GETTERS/////////////////////////////////////

int Form::getSign() const
{
    return (this->GradeToSign);
}

int Form::getExecute() const
{
    return (this->GradeToExecute);
}

std::string Form::getName() const
{
    return (this->Name);
}

bool    Form::getIsSigned() const
{
    return (this->IsSigned);
}

/////////////////////////////////////OPERATOR OVERLOAD/////////////////////////////////////

Form    &Form::operator=(const Form &obj)
{
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw Form::GradeTooLowException();
    this->IsSigned = obj.IsSigned;
    return *this;
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getSign())
        throw Form::GradeTooLowException();
    this->IsSigned = true;
}

void    Form::execute(Bureaucrat const &executor) const 
{
    if (executor.getGrade() > this->getExecute())
        throw Form::GradeTooLowException();
    if (!this->getIsSigned())
    {
        std::cout << "couldn't execute form because it's not signed" << std::endl;
        return;
    }
    this->action();
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

std::ostream    &operator<<(std::ostream &o, const Form &obj)
{
    o << "name: " << obj.getName() << std::endl
      << "is signed: " << (obj.getIsSigned() ? "yes" : "no") << std::endl
      << "grade to sign: " << obj.getSign() << std::endl
      << "greade to execute: " << obj.getExecute() << std::endl;
    return (o);
}

/////////////////////////////////////EXCEPTIONS/////////////////////////////////////

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}
