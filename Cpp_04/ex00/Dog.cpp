/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:15:03 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:57:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog appears" << std::endl;
	_type = "type Dog";
}

Dog::~Dog()
{
	std::cout << "Dog obliterated" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	this->_type = copy._type;
}

Dog &Dog::operator=(Dog const &copy)
{
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Dog::makeSound(void)
{
	std::cout << "Dog: bark" << std::endl;
}


