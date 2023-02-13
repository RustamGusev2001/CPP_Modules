/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:59:27 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 19:05:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:
		FragTrap();

	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &copy);
		FragTrap &operator=(FragTrap const &copy);

		void highFivesGuys(void);
};

#endif