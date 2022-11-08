/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:52:39 by moabid            #+#    #+#             */
/*   Updated: 2022/11/08 01:01:57 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
	private:
		std::string name_;
		int			grade_;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &rsc);
		~Bureaucrat();

		Bureaucrat	const &operator=(Bureaucrat const &rsc);

		void	setGrade(int grade);

		std::string const	&getName() const;
		int const			&getGrade() const;

		void				increment();
		void				decrement();

		class	GradeTooHighException : public std::exception {
			const char		*what() const throw();
		};
		
		class	GradeTooLowException : public std::exception {
			const char		*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &lhs, Bureaucrat &rhs);