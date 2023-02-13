/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:33 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 17:18:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
	private:
		Weapon();
		std::string _type;

	public:
		Weapon(std::string const &type);
		~Weapon();

		std::string const &getType() const;
		void setType(std::string const &type);
};

#endif