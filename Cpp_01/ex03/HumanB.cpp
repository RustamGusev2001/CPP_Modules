/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:06 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:18:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << _name <<  " attacks with their " << "nothing" << std::endl;
		return;
	}
	std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}