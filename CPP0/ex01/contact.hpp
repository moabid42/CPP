/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:31:20 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 19:19:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.hpp"

# include <iostream>

class Contact {
    private:
        std::string firstname_;
        std::string lastname_;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        ~Contact();
        
    int  phoneValidation(std::string phone);

    void	setFirstName(std::string fname_);
    void	setLastName(std::string lname_);
    void	setNickname(std::string nick);
    void	setPhoneNumber(std::string phone);
    void	setDarkestSecret(std::string secret);

    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
};

#endif