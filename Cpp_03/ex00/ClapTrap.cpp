/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:58:04 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 19:39:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_health = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}
void ClapTrap::attack(const std::string& target)
{
	if (_health <= 0 || _energy <= 0)
		std::cout << "Action can't be done by " << _name << std::endl;
	else 
	{
	_energy--;
	std::cout << "ClapTrap " << _name << " attacks "
			<< target << ", causing " << _attack
			<< " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << "ClapTrap " << _name << " take damage "
			<< amount << ", current health " << _health  << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_health <= 0 || _energy <= 0)
		std::cout << "Action can't be done by " << _name << std::endl;
	else 
	{
		_energy--;
	_health += amount;
	std::cout << "ClapTrap " << _name << " be repaired on "
			<< amount << ", current health " << _health  << std::endl;
	}
}