/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:25:11 by moabid            #+#    #+#             */
/*   Updated: 2022/10/30 21:29:51 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Var address: " << &str << std::endl;
    std::cout << "StringPTR  : " << &(*stringPTR) << std::endl;
    std::cout << "StringREF  : " << &(stringREF) << std::endl;

    std::cout << "Var value  : " << str << std::endl;
    std::cout << "StringPTR  : " << *stringPTR << std::endl;
    std::cout << "StringREF  : " << stringREF << std::endl;

    return (0);
}