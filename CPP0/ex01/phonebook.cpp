/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:02:13 by moabid            #+#    #+#             */
/*   Updated: 2022/11/04 15:55:57 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook()
{
    this->contact_count = 0;
}

PhoneBook::~PhoneBook()
{
    return ;
}

Contact::Contact(void)
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::~Contact(void)
{
	return ;
}

/////////////////////////// SEARCH CONTACT //////////////////////////

std::string Contact::getFirstName()
{
    return (this->first_name);
}

std::string Contact::getLastName()
{
    return (this->last_name);
}

std::string Contact::getNickName()
{
    return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
    return (this->phone_number);
}

std::string Contact::getDarkestSecret()
{
    return (this->darkest_secret);
}

void    searchContact(PhoneBook &phonebook)
{
    phonebook.search_contact();
}

void	PhoneBook::search_contact(void)
{
	int	index;

	for (int i = 0; i <  8; i++){
		if (list[i].getFirstName() != ""){
			std::cout << std::right << std::setw(10);
			std::cout << i + 1;
			std::cout << " |";
			std::cout << std::right << std::setw(10);
			std::cout << list[i].getFirstName();
			std::cout << " |";
			std::cout << std::right << std::setw(10);
			std::cout << list[i].getLastName();
			std::cout << " |";
			std::cout << std::right << std::setw(10);
			std::cout << list[i].getNickName();
			std::cout << " |" << std::endl;
		}
	}
	std::cout << "Enter the Contact index: " << std::endl;
	std::cin >> index;
	if (index < 1 || index > 8){
		std::cout << "Please enter a valid digit from 1 to 8" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return ;
	}
	if (list[index -1].getFirstName() != " ")
	{
		std::cout << "\nFirst Name: " << list[index -1].getFirstName() << std::endl;
		std::cout << "Last Name: " << list[index -1].getLastName() << std::endl;
		std::cout << "Nick Name: " << list[index -1].getNickName() << std::endl;
		std::cout << "Phone Number: " << list[index -1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << list[index -1].getDarkestSecret() << std::endl;
        std::cout << "CONTACT SAVED" << std::endl;
	}
	else
		std::cout << "Please enter a contact from the list" << std::endl;
	std::cin.ignore(10000, '\n');
}

//////////////////////////// ADD CONTACT ////////////////////////////

int	Contact::phoneValidation(std::string phone)
{
	if (*phone.begin() == ' ' || phone == ""){
		std::cout << "ERROR: Phone number empty!!" << std::endl;
		return (0);
	}
	if (phone.size() != 14){
		std::cout << "ERROR: Phone number format not valid!!" << std::endl;
		return (0);
	}
    for(unsigned int i = 0; i < phone.length(); i++) {
        if (isdigit(phone[i] == 0)) {
		    std::cout << "ERROR: Phone number format not valid!!" << std::endl;
		    return (0);
        }
	}
	return (1);
}

void	Contact::setFirstName(std::string f_name){
	first_name = f_name;
}

void    Contact::setLastName(std::string l_name){
    last_name = l_name;
}

void    Contact::setNickname(std::string nick){
    nickname = nick;
}

void    Contact::setPhoneNumber(std::string phone){
    phone_number = phone;
}

void    Contact::setDarkestSecret(std::string secret){
    darkest_secret = secret;
}

void PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    Contact new_contact;

    list[this->contact_count].setFirstName(first_name);
    list[this->contact_count].setLastName(last_name);
    list[this->contact_count].setNickname(nickname);
    list[this->contact_count].setPhoneNumber(phone_number);
    list[this->contact_count].setDarkestSecret(darkest_secret);
    this->contact_count++;
    if (this->contact_count == 8)
        this->contact_count = 0;
}


void    addContact(PhoneBook &phonebook)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    Contact contact;

    std::cout << "Enter first name: ";
    std::cin >> first_name;
    std::cout << "Enter last name: ";
    std::cin >> last_name;
    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    if (contact.phoneValidation(phone_number) == 0)
        return ;
    std::cout << "Enter darkest secret: ";
    std::cin >> darkest_secret;
    phonebook.add_contact(first_name, last_name, nickname, phone_number, darkest_secret);
}

//////////////////////////// MAIN ////////////////////////////

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (!std::cin.eof())
    {
        std::cout << "----------------------------" << std::endl;
        std::cout <<  "In this phonebook you can: " << std::endl;
        std::cout <<  "     ADD" << std::endl;
        std::cout <<  "     SEARCH" << std::endl;
        std::cout <<  "     EXIT" << std::endl;
        std::cout << "----------------------------" << std::endl;
        std::cout << "Enter a command: ";
        std::cin >> command;
        if (command == "EXIT")
        {
            phonebook.~PhoneBook();
            break;
        }
        else if (command == "ADD")
            addContact(phonebook);
        else if (command == "SEARCH")
            searchContact(phonebook);
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}