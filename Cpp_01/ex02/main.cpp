/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:03:16 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:49:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string		a = "HI THIS IS BRAIN";
	std::string 	*ptr_a = &a;
	std::string 	&ref_a = a;

	std::cout << &a << std::endl;
	std::cout << ptr_a << std::endl;
	std::cout << &ref_a << std::endl;
	std::cout << a << std::endl;
	std::cout << *ptr_a << std::endl;
	std::cout << ref_a << std::endl;

	std::string		b = "Perem2";
	
	ptr_a = &b;
	ref_a = b;
	std::cout << "Perem2:" << &b << std::endl;
	std::cout << ptr_a << std::endl;
	std::cout << &ref_a << std::endl;
	std::cout << b << std::endl;
	std::cout << *ptr_a << std::endl;
	std::cout << ref_a << std::endl;

	return 0;
}