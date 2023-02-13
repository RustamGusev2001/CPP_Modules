/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:58:20 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 10:58:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Zhelez("Zhelez");
	ClapTrap Yascher("Yascher");
	Zhelez.attack("Yascher");
	Yascher.takeDamage(2);
	Yascher.beRepaired(1);

	return 0;
}