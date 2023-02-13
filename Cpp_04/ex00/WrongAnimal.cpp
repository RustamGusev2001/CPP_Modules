/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:15:15 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:57:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal appears" << std::endl;
	_type = "unknown type";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal obliterated" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	this->_type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound()
{
	std::cout << "I'm WrongAnimal." << std::endl;
}

std::string WrongAnimal::getType()
{
	return _type;
}
