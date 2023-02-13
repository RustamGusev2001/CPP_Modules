/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:15:59 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:48:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat appears" << std::endl;
	_type = "type Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat obliterated" << std::endl;
	if (_brain != nullptr)
		delete _brain;
}

Cat::Cat(Cat const &copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(Cat const &copy)
{
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Cat::makeSound(void)
{
	std::cout << "Cat: Meow" << std::endl;
}

