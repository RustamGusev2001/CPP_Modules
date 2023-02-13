/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:17:50 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:17:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
}