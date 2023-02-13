/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:58:53 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 18:32:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();

	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap &operator=(ScavTrap const &copy);

		void attack(const std::string& target);
		void guardGate();
};

#endif