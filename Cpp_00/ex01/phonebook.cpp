/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:02:23 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 22:26:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	this->nbr_of_contacts = 0;
}

static str get_value_of(str s) {
	str ret;
	std::cout << s << ": ";
	std::getline(std::cin, ret);
	if (!(std::cin.good()))
	{
		std::cout << "CTRL+D pressed" << std::endl;
		std::cout << "exiting..." << std::endl;
		exit(0);
	}
	return ret;
}

void PhoneBook::add_contact() {
	str f_name;
	str l_name;
	str nickname;
	str phone;
	str darkest_secret;
	std::cout << "first name:";
	std::cin >> f_name;
	std::cout << "last name:";
	std::cin >> l_name;
	std::cout << "nickname:";
	std::cin >> nickname;
	std::cout << "phone number:";
	std::cin >> phone;
	std::cout << "darkest secret:";
	std::cin >> darkest_secret;
	Contact contact(f_name, l_name, nickname, phone, darkest_secret);
	this->contacts[nbr_of_contacts++ % 8] = contact;
}

void PhoneBook::get_contact(int index) {
	if (index > 7 || index >= this->nbr_of_contacts + 1 || index <= 0) {
		std::cout << "IndexError: list index out of range" << std::endl;
		return ;
	}
	Contact contact = this->contacts[index - 1];
	std::cout << "first name: " << contact.get_first_name() << std::endl;
	std::cout << "last name: " << contact.get_last_name() << std::endl;
	std::cout << "nickname: " << contact.get_nickname() << std::endl;
	std::cout << "phone number: " << contact.get_phone() << std::endl;
	std::cout << "darkest sucret: " << contact.get_darkest_secret() << std::endl;
}

static void out_substr(str s) {
	int i = 0;

    while (i < (int) s.length() && i < 10 - 1) {
        std::cout << s[i];
        i++;
    }

    if ((int) s.length() == 10) {
        std::cout << s[i];
    } else if ((int) s.length() > 10) {
        std::cout << ".";
    } else {
        while (i < 10) {
            std::cout << " ";
            i++;
        }
    }

}

void PhoneBook::get_contacts_list() {
	for (int i = 0; i < 8 && i < this->nbr_of_contacts; i++) {
		Contact contact = this->contacts[i];
		std::cout << i + 1 << " | ";
		out_substr(contact.get_first_name());
		std::cout << " | ";
		out_substr(contact.get_last_name());
		std::cout << " | ";
		out_substr(contact.get_nickname());
		std::cout << "|" << std::endl;
	}
	str nbr;
	int	index;
	std::cout << "index: ";
	std::getline(std::cin, nbr);
	std::stringstream ss;
	ss << nbr;
	if (!(ss >> index)) {
		std::cout << "Bad input" << std::endl;
		std::cout << "exiting..." << std::endl;
		exit(0);
	}
	get_contact(index);
}