/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:16:28 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:51:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal appears" << std::endl;
	_type = "unknown type";
	_brain = nullptr;
}

Animal::~Animal()
{
	std::cout << "Animal obliterated" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Animal &Animal::operator=(Animal const &copy)
{
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Animal::makeSound()
{
	std::cout << "Animal cannot talk" << std::endl;
}

std::string Animal::getType()
{
	return _type;
}

void Animal::addIdea(std::string idea)
{
	if(_brain != nullptr)
		_brain->addIdea(idea);
}

void Animal::forgetIdea(void)
{
	if(_brain != nullptr)
		_brain->forgetIdea();
}

void Animal::printIdeas()
{
	if(_brain != nullptr)
		_brain->printIdeas();
}
