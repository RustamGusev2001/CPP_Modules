/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:58:41 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 18:38:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap Zhelez("Zhelez");
	ClapTrap Yazher("Yazher");
	Zhelez.attack("Yazher");
	Yazher.takeDamage(2);
	Yazher.beRepaired(1);

	std::cout << "-------------" << std::endl;
	ScavTrap Zhelez2("Zhelez2");
	ScavTrap Yazher2("Yazher2");
	Zhelez2.attack("Yazher2");
	Yazher2.takeDamage(2);
	Yazher2.beRepaired(1);
	Zhelez2.guardGate();
	Yazher2.guardGate();
	std::cout << "-------------" << std::endl;

	return 0;
}