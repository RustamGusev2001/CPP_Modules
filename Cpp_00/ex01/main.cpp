/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:02:14 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 21:44:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int main(void) {
	PhoneBook phone_book = PhoneBook();
	while (true) {
		std::string cmd;
		std::cout << "\033[0;32m" << "PhoneBook$ " << "\033[0m";
		std::getline(std::cin, cmd);
		if (!(std::cin.good())) {
			std::cout << "CTRL+D pressed" << std::endl;
			std::cout << "exiting..." << std::endl;
			exit(0);
		}
		if (cmd == "ADD")
			phone_book.add_contact();
		else if (cmd == "SEARCH")
			phone_book.get_contacts_list();
		else if (cmd == "EXIT")
			exit(0);
		else
			std::cout << "PhoneBook: " << cmd << ": command not found" << std::endl;
	}
}
