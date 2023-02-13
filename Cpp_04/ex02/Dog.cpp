/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:17:00 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:51:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog appears" << std::endl;
	_type = "type Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog obliterated" << std::endl;
	if (_brain != nullptr)
		delete _brain;
}

Dog::Dog(Dog const &copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(Dog const &copy)
{
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Dog::makeSound(void)
{
	std::cout << "Dog: bark" << std::endl;
}


