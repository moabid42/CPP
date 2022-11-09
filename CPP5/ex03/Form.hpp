/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:57:22 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:10:59 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "iostream"

class Bureaucrat;

class Form
{
    private:
        std::string const   Name;
        bool                IsSigned;
        const int           GradeToSign;
        const int           GradeToExecute;

    public:
        Form();
        Form(std::string Name, int Sing, int Execute);
        Form(const Form &oth);
        virtual ~Form();

        int getSign() const;
        int getExecute() const;

        std::string getName() const;
        bool        getIsSigned() const;
        virtual void action() const = 0;

        Form    &operator=(const Form &obj);
        void    beSigned(Bureaucrat & bureaucrat);
        void    execute(Bureaucrat const &executor) const;

        virtual Form *clone(std::string Target) = 0;

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const Form &obj);