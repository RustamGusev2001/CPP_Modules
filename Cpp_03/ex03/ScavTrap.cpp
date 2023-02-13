/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:59:37 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 19:28:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "name";
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (_health <= 0 || _energy <= 0)
		std::cout << "Action can't be done by " << _name << std::endl;
	else 
	{
	_energy--;
	std::cout << "ScavTrap " << _name << " attacks "
			<< target << ", causing " << _attack
			<< " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << _name << " Gate keeper mod ON" << std::endl;
}