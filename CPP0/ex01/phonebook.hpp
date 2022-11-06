/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:04:19 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:19:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact list[8];
        int contact_count;
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact(std::string firstname_, std::string lastname_, std::string nickname, std::string phone_number, std::string darkest_secret);
        void search_contact();
};

#endif