/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:57:12 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 00:10:00 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
		std::string	Name;
		int			Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &obj);
		std::string	getName() const;
		int			getGrade() const;

		void 		executeForm(Form const &form);

		class GradeTooHighException : public std::exception
		{
		public:
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw();
		};

		void	incrementGrade();
		void	decrementGrade();
        void	signForm(Form &form);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);