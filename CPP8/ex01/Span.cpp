/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:28:17 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 23:48:14 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

///////////////////////////////CONSTRACTORS/////////////////////////////////////

Span::Span() : size_(0)
{
}

Span::Span(unsigned int n) : size_(n)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{
}

///////////////////////////////OPERATORS////////////////////////////////////////

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->vector_ = rhs.vector_;
        this->size_ = rhs.size_;
    }
    return *this;
}

///////////////////////////////MEMBER FUNCTIONS/////////////////////////////////

void Span::addNumber(int n)
{
    if (this->vector_.size() == this->size_)
        throw Span::FullException();
    this->vector_.push_back(n);
}

int Span::shortestSpan()
{
    if (this->vector_.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> temp = this->vector_;
    std::sort(temp.begin(), temp.end());
    int min = temp[1] - temp[0];
    for (unsigned int i = 1; i < temp.size() - 1; i++)
    {
        if (temp[i + 1] - temp[i] < min)
            min = temp[i + 1] - temp[i];
    }
    return min;
}

int Span::longestSpan()
{
    if (this->vector_.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> temp = this->vector_;
    std::sort(temp.begin(), temp.end());
    return temp[temp.size() - 1] - temp[0];
}

///////////////////////////////EXCEPTIONS///////////////////////////////////////

const char* Span::FullException::what() const throw()
{
    return "The vector is full";
}

const char* Span::NoSpanException::what() const throw()
{
    return "There is no span";
}
