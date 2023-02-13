/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:14 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:18:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB
{
	private:
		HumanB();
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB(std::string const &name);
		~HumanB();

        void attack();
		void setWeapon(Weapon &weapon);
};

#endif