/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:26:36 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 23:27:51 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>


class Span
{
    private:
        std::vector<int>    vector_;
        unsigned int        size_;

    public:
        Span();
        Span(unsigned int n);
        Span(Span const &src);
        ~Span();

        Span &operator=(Span const &rhs);

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        class FullException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class NoSpanException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};