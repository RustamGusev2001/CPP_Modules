/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:14:56 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:57:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat appears" << std::endl;
	_type = "type Cat";
}

Cat::~Cat()
{
	std::cout << "Cat obliterated" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	this->_type = copy._type;
}

Cat &Cat::operator=(Cat const &copy)
{
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Cat::makeSound(void)
{
	std::cout << "Cat: Meow" << std::endl;
}

