/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:59:32 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 19:00:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap Zhelez("Zhelez");
	ClapTrap Yascher("Yascher");
	Zhelez.attack("Yascher");
	Yascher.takeDamage(2);
	Yascher.beRepaired(1);

	std::cout << "-------------" << std::endl;
	ScavTrap Zhelez2("Zhelez2");
	ScavTrap Yascher2("Yascher2");
	Zhelez2.attack("Yascher2");
	Yascher2.takeDamage(2);
	Yascher2.beRepaired(1);
	Zhelez2.guardGate();
	Yascher2.guardGate();

	std::cout << "-------------" << std::endl;
	FragTrap Zhelez3("Zhelez3");
	FragTrap Yascher3("Yascher3");
	Zhelez3.attack("Yascher3");
	Yascher3.takeDamage(2);
	Yascher3.beRepaired(1);
	Zhelez3.highFivesGuys();
	Yascher3.highFivesGuys();
	std::cout << "-------------" << std::endl;

	return 0;
}