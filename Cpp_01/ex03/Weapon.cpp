/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:27 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:18:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	_type = type;
}

Weapon::~Weapon()
{

}

std::string const &Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string const &type)
{
	_type = type;
}