/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:17:57 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:17:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA
{
	private:
		HumanA();
		std::string _name;
		Weapon *_weapon;

	public:
		HumanA(std::string const &name, Weapon &weapon);
		~HumanA();

        void attack();
};

#endif