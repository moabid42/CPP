/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:26:52 by moabid            #+#    #+#             */
/*   Updated: 2022/11/08 03:14:04 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/////////////////////////////CONSTRACTORS/////////////////////////////////

Bureaucrat::Bureaucrat() : name_("default"), grade_(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &rsc)
{
    *this = rsc;
}

////////////////////////////OPERATORS///////////////////////////////////

Bureaucrat	const &Bureaucrat::operator=(Bureaucrat const &rsc)
{
	this->name_ = rsc.getName();
	this->grade_ = rsc.getGrade();
	return(*this);
}

std::ostream	&operator<<(std::ostream &lhs, Bureaucrat &rhs)
{
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (lhs);
}

/////////////////////////////DETRUCTORS/////////////////////////////////

Bureaucrat::~Bureaucrat()
{
}

/////////////////////////////SETTERS/////////////////////////////////

void Bureaucrat::setGrade(int grade)
{
    grade_ = grade;
}

/////////////////////////////GETTERS/////////////////////////////////

std::string const	&Bureaucrat::getName() const
{
	return (this->name_);
}

int const	&Bureaucrat::getGrade() const
{
	return (this->grade_);
}

/////////////////////////////MEMBER_FUNC///////////////////////////////

void    Bureaucrat::increment(void)
{
    if (this->grade_ == 1)
        throw GradeTooHighException();
    this->grade_--;
}

void    Bureaucrat::decrement(void)
{
    if (this->grade_ == 150)
        throw GradeTooLowException();
    this->grade_++;
}

void    Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->name_ << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->name_ << " cannot sign " << form.getName() << " because " << e.what() << '\n';
    }
}

/////////////////////////////EXCETIONS/////////////////////////////////

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}
