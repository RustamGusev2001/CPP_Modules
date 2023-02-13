/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:14:46 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:58:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal appears" << std::endl;
	_type = "animal type";
}

Animal::~Animal()
{
	std::cout << "Animal obliterated" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	this->_type = copy._type;
}

Animal &Animal::operator=(Animal const &copy)
{
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Animal::makeSound()
{
	std::cout << "Animal: mrlglslh" << std::endl;
}

std::string Animal::getType()
{
	return _type;
}

