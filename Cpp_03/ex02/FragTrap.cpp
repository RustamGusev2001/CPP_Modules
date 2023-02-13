/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:59:21 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 19:06:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap()
{
	_name = "name";
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << _name << " high fives guys" << std::endl;
}