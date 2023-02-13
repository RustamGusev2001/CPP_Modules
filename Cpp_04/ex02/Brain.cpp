/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:16:45 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 19:43:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain here" << std::endl;

	_num_ideas = 0;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = "";
}

Brain::~Brain()
{
	std::cout << "Brain obliterated" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	this->_num_ideas = copy._num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(Brain const &copy)
{
	if(this == &copy)
		return *this;

	this->_num_ideas = copy._num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];

	return *this;
}

void Brain::addIdea(std::string idea)
{
	_ideas[_num_ideas] = idea;
	_num_ideas++;
}

void Brain::forgetIdea(void)
{
	_ideas[_num_ideas] = "";
	_num_ideas--;
}

void Brain::printIdeas()
{
	for (int i = 0; i < _num_ideas; i++)
	{
		std::cout << _ideas[i] << std::endl;
	}
}
